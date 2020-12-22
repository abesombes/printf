/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:35:41 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/22 19:11:34 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_is_conv_spec(char c);
int ft_is_flag(char c);
int ft_is_charset(char *s, char c);
int	ft_printf(const char *str, ...);
int	ft_parse_format(const char *str, t_printf *format, int i, va_list *va);
void ft_reset(t_printf *format);

int ft_is_conv_spec(char c)
{
	char *conv_spec;
	int i;

	i = 0;
	conv_spec = "cspdiuxXnfge";
	while (conv_spec[i] != c)
		i++;
	if (i > 11)
		return (0);
	return (1);
}

int ft_is_flag(char c)
{
	char *flags;
	int i;

	i = 0;
	flags = "*0+ -#";
	while (flags[i] != c)
		i++;
	if (i > 5)
		return (0);
	return (1);
}

int ft_is_charset(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list va;
	int i;
	int j;
	int nb_var;
	unsigned char c;
	void *p;
	t_printf *format;
	int k;
	double f;

	va_start (va, str);
	nb_var = 0;
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
			while (str[i + j] && ft_is_conv_spec(str[i + j]) != 1)
				j++;
			nb_var++;
			if (format->width == 0)
				format->width = va_arg(va, int);
			if (str[i + j] && ft_is_conv_spec(str[i + j]) == 1)
			{	
				if (str[i + j] == 'c')
					ft_putchar(c = va_arg (va, int));
				else if (ft_is_charset("feg", str[i + j]))
				{
					f = va_arg(va, double);
					ft_put_float(f, format, ft_count_floatsize(f, format));
				}
				else if (str[i + j] == 'p')
				{
					p = va_arg(va, void *);
					ft_putnbr_hex((long long)p, format, ft_count_hexsize((long long)p, format));
				}
				else if (str[i + j] == 's')
				{
					p = va_arg(va, char *);
					ft_put_str(p, format, ft_count_letters(p, format));
				}
				else if (ft_is_charset("udixX", str[i + j]))
				{
					if (str[i + j] == '*')
						format->width = va_arg(va, int);
					k = va_arg(va, long long);
					if (ft_is_charset("xX", str[i + j]))
						ft_putnbr_hex((unsigned int)k, format, ft_count_hexsize(k, format));
					else
					{
						if (str[i + j] == 'u' && format->plus)
							format->plus = 0;
						if (str[i + j] == 'u' && format->space)
							format->space = 0;
						ft_put_nbr((int)k, format, ft_count_charsize(k, format));
					}
				}
			}
		}
		else if (str[i] == '%' && str[i + 1] == '%')
			ft_putchar('%');
		i = i + j + 1;	
	}
	ft_putchar(str[i]);
	va_end (va);
	return (nb_var);
}

void ft_reset(t_printf *format)
{
	format->start = NULL;
	format->conv_spec = 0;
	format->data = NULL;
	format->width = -1;
	format->precision = -1;
	format->minus = 0;
	format->plus = 0;
	format->space = 0;
	format->alternate = 0;
	format->zero = 0;
	format->uc_x = 0;
	format->dot = 0;
}

int	ft_parse_format(const char *str, t_printf *format, int i, va_list *va)
{
	int j;
	
	j = 1;	
	ft_reset(format);
	while (ft_is_flag(str[i + j]) && ft_is_charset("cspdiuxXnfge", str[i + j]) == 0)
	{	
		if (str[i + j] == '-')
			format->minus = 1;
		else if (str[i + j] == '+')
			format->plus = 1;
		else if (str[i + j] == '0')
			format->zero = 1;
		else if (str[i + j] == ' ')
			format->space = 1;
		else if (str[i + j] == '#')
			format->alternate = 1;
		else if (str[i + j] == '*')
			format->width = 0;
		j++;
	}
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
//	printf("\n###### FLAGS DETECTION ######\n");
//	printf("start: [%s]\n", format->start);
//	printf("conv_spec: [%c]\n", format->conv_spec);
//	printf("width: [%i]\n", format->width);
//	printf("precision: [%i]\n", format->precision);
//	printf("minus: [%i]\n", format->minus);
//	printf("plus: [%i]\n", format->plus);
//	printf("space: [%i]\n", format->space);
//	printf("zero: [%i]\n", format->zero);
//	printf("alternate: [%i]\n", format->alternate);
	return(1);
}
