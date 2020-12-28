/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:35:41 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/28 22:46:10 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void ft_launch_conv_spec_cfegps(char conv_spec, t_printf *format, va_list &va)
{
	unsigned char c;
	double f;
	void *p;

	if (ft_is_charset("feg", conv_spec))
	{
		f = va_arg(va, double);
		if (conv_spec == 'f')
			ft_put_float(f, format, ft_count_floatsize(f, format));
		else
			ft_put_exp(f, format, ft_count_expsize(f, format));
	}
	else if (conv_spec == 'p')
	{
		p = va_arg(va, void *);
		ft_putnbr_hex((long long)p, format, ft_count_hexsize((long long)p, \ 
					format));
	}
	else if (conv_spec == 's')
	{
		p = va_arg(va, char *);
		ft_put_str(p, format, ft_count_letters(p, format));
	}
	ft_launch_conv_spec_udixX(str[i + j], format, &va);
}

void	ft_launch_conv_spec_udixX(char conv_spec, t_printf *format, va_list va)
{
	int k;
	
	if (ft_is_charset("udixX", conv_spec))
	{
		if (conv_spec == '*')
			format->width = va_arg(va, int);
		k = va_arg(va, long long);
		if (ft_is_charset("xX", conv_spec)
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

int	ft_finish_parsing(char c, va_list va, t_printf *format)
{
	int i;

	ft_putchar(c);
	va_end (va);
	i = format->displayed;
	free(format);
	return (i);
}

void ft_parse_width_conv_spec(char c, int j, t_printf *format, va_list va)
{
	while (c && ft_is_conv_spec(c) != 1)
		j++;
	if (format->width == 0)
		format->width = va_arg(va, int);
	if (c && ft_is_conv_spec(c) == 1)	
	{
		if (conv_spec == 'c')
			ft_putchar(c = va_arg (va, int));
		ft_launch_conv_spec_cfegps(str[i + j], format, &va);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list va;
	int i;
	int j;
	t_printf *format;

	va_start (va, str);
	i = 0;
	if (!(format = (t_printf *)malloc(sizeof(t_printf))))
		return (-1);
	while (str[i] && str[i + 1])
	{
		j = 1;
		while (str[i] != '%')
			ft_putchar(str[i++]);
		if (str[i] == '%' && str[i + 1] != '%')
		{
			ft_parse_format(str, format, i, &va);
			ft_parse_width_conv_spec(str[i + j], &j, format, &va);
		}
		else if (str[i] == '%' && str[i + 1] == '%')
			ft_putchar('%');
		i = i + j + 1;	
	}
	return (ft_finish_parsing(str[i], &va, format));
}

void	ft_parse_flags(char flag, t_printf *f)
{
	if (flag == '-')
		f->minus = 1;
	else if (flag == '+')
		f->plus = 1;
	else if (flag == '0')
		f->zero = 1;
	else if (flag == ' ')
		f->space = 1;
	else if (flag == '#')
		f->alternate = 1;
	else if (flag == '*')
		f->width = 0;
}

void	ft_parse_length(char c1, char c2, t_printf *f)
{
	if (c1 != 'l' && c2 == 'l')
		f->length = 'l';
	else if (c1 != 'h' && c2 == 'h')
		f->length = 'h';
	else if (c1 == 'l' && c2 == 'l')
		f->length = 'L';
	else if (c1 == 'h' && c2 == 'h')
		f->length = 'H';
}

int	ft_parse_format(const char *str, t_printf *format, int i, va_list *va)
{
	int j;
	char *flags;

	flags = "cspdiuxXnfge";
	j = 1;	
	ft_reset(format);
	while (ft_is_flag(str[i + j]) && ft_is_charset(flags, str[i + j]) == 0)
		ft_parse_flags(str[i + j++], format);
	if (str[i + j] >= '0' && str[i + j] <= '9')
		format->width = 0;	
	while (str[i + j] >= '0' && str[i + j] <= '9')
		format->width = format->width * 10 + str[i + j++] - 48;
	if (str[i + j] == '.')
	{
		j++;
		format->precision = 0;
		while (str[i + j] >= '0' && str[i + j] <= '9')
			format->precision = format->precision * 10 + str[i + j++] - 48;
	}
	format->conv_spec = str[i + j];
	ft_parse_length(str[i + j - 2], str[i + j - 1]);
	return (1);
}
