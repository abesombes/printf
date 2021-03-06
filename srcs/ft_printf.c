/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:35:41 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 23:15:18 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_launch_fegps(char conv_s, t_printf *format, va_list *va)
{
	double	f;
	void	*p;

	if (ft_is_charset("feg", conv_s))
	{
		f = va_arg(*va, double);
		if (conv_s == 'f')
			ft_put_float(f, format, ft_count_floatsize(f, format));
		else
			ft_put_exp_before_after(f, format, ft_count_expsize(f, format));
	}
	else if (conv_s == 'p')
	{
		p = va_arg(*va, void *);
		ft_putptr_hex((unsigned long long)p, format, \
				ft_count_ptr_hexsize((unsigned long long)p, format));
	}
	else if (conv_s == 's')
	{
		p = va_arg(*va, char *);
		if (!p)
			p = "(null)";
		ft_put_str(p, format, ft_count_letters(p, format));
	}
	ft_launch_udix(conv_s, format, va);
}

void	ft_launch_udix(char conv_s, t_printf *format, va_list *va)
{
	long long	k;

	if (ft_is_charset("udixX", conv_s))
	{
		if (conv_s == '*')
			format->width = va_arg(*va, int);
		k = va_arg(*va, long long);
		if (ft_is_charset("xX", conv_s))
			ft_putnbr_hex((unsigned int)k, format, \
					ft_count_hexsize((unsigned int)k, format));
		else
		{
			if (conv_s == 'u' && format->plus)
				format->plus = 0;
			if (conv_s == 'u' && format->space)
				format->space = 0;
			if (conv_s == 'u')
				ft_put_nbr((unsigned int)k, format, \
						ft_count_charsize((unsigned int)k, format));
			else
				ft_put_nbr((int)k, format, ft_count_charsize((int)k, format));
		}
	}
}

int		ft_finish_parsing(const char *str, int i, va_list *va, t_printf *format)
{
	int	total_nb_displayed_chars;

	while (str[i] && i < ft_strlen(str))
		ft_putchar_f(str[i++], format);
	va_end(*va);
	total_nb_displayed_chars = format->displayed;
	free(format);
	return (total_nb_displayed_chars);
}

void	ft_launch_cn(char conv_s, t_printf *format, va_list *va)
{
	unsigned char	c;
	int				*ptr;

	if (format->conv_s == '%' || format->conv_s == 0)
		ft_putc(conv_s, format);
	if (conv_s && ft_is_conv_s(conv_s) == 1)
	{
		if (conv_s == 'c')
		{
			c = va_arg(*va, int);
			ft_putc(c, format);
		}
		else if (conv_s == 'n')
		{
			ptr = va_arg(*va, int*);
			*ptr = format->displayed;
		}
		ft_launch_fegps(conv_s, format, va);
	}
}

int		ft_printf(const char *str, ...)
{
	va_list		va;
	int			i;
	int			j;
	t_printf	*format;

	va_start(va, str);
	i = 0;
	if (!(format = (t_printf *)malloc(sizeof(t_printf))))
		return (-1);
	format->displayed = 0;
	while (str[i] && str[i + 1] && i < ft_strlen(str))
	{
		j = 1;
		ft_print_if_not_percentage(str, &i, format);
		if (str[i] && str[i + 1] && str[i] == '%' && str[i + 1] != '%')
		{
			ft_parse_format(str, format, i, &j);
			ft_parse_stars(str + i, format, &va);
			ft_launch_cn(str[i + j], format, &va);
		}
		else if (str[i] && str[i + 1] && str[i] == '%' && str[i + 1] == '%')
			ft_putchar_f('%', format);
		i = i + j + 1;
	}
	return (ft_finish_parsing(str, i, &va, format));
}
