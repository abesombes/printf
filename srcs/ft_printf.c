/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:35:41 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/02 00:49:42 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_launch_cfegps(char conv_spec, t_printf *format, va_list *va)
{
	double	f;
	void	*p;

	if (ft_is_charset("feg", conv_spec))
	{
		f = va_arg(*va, double);
		if (conv_spec == 'f')
			ft_put_float(f, format, ft_count_floatsize(f, format));
		else
			ft_put_exp_before_after(f, format, ft_count_expsize(f, format));
	}
	else if (conv_spec == 'p')
	{
		p = va_arg(*va, void *);
		ft_putnbr_hex((long long)p, format, ft_count_hexsize((long long)p, \
format));
	}
	else if (conv_spec == 's')
	{
		p = va_arg(*va, char *);
		ft_put_str(p, format, ft_count_letters(p, format));
	}
	ft_launch_udix(conv_spec, format, va);
}

void	ft_launch_udix(char conv_spec, t_printf *format, va_list *va)
{
	int	k;

	if (ft_is_charset("udixX", conv_spec))
	{
		if (conv_spec == '*')
			format->width = va_arg(*va, int);
		k = va_arg(*va, long long);
		if (ft_is_charset("xX", conv_spec))
			ft_putnbr_hex((unsigned int)k, format, ft_count_hexsize(k, format));
		else
		{
			if (conv_spec == 'u' && format->plus)
				format->plus = 0;
			if (conv_spec == 'u' && format->space)
				format->space = 0;
			ft_put_nbr((int)k, format, ft_count_charsize(k, format));
		}
	}
}

int	ft_finish_parsing(const char *str, int i, va_list *va, t_printf *format)
{
	int	total_nb_displayed_chars;

	while (str[i] && i < ft_strlen(str))
		ft_putchar_f(str[i++], format);
	va_end(*va);
	total_nb_displayed_chars = format->displayed;
	free(format);
	return (total_nb_displayed_chars);
}

void	ft_parse_width(char conv_spec, t_printf *format, va_list *va)
{
	unsigned char	c;

	if (format->width == 0)
		format->width = va_arg(*va, int);
	if (conv_spec && ft_is_conv_spec(conv_spec) == 1)
	{
		if (conv_spec == 'c')
		{
			c = va_arg(*va, int);
			ft_putchar_f(c, format);
		}
		ft_launch_cfegps(conv_spec, format, va);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list		va;
	int			i;
	int			j;
	t_printf	*format;

	va_start(va, str);
	i = 0;
	format = (t_printf *)malloc(sizeof(t_printf));
	if (!format)
		return (-1);
	format->displayed = 0;
	while (str[i] && str[i + 1] && i < ft_strlen(str))
	{
		j = 1;
		ft_print_if_not_percentage(str, &i, format);
		if (str[i] && str[i + 1] && str[i] == '%' && str[i + 1] != '%')
		{
			ft_parse_format(str, format, i, &j);
			ft_parse_width(str[i + j], format, &va);
		}
		else if (str[i] && str[i + 1] && str[i] == '%' && str[i + 1] == '%')
			ft_putchar_f('%', format);
		i = i + j + 1;
	}
	return (ft_finish_parsing(str, i, &va, format));
}
