/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parsing_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 11:35:05 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/31 00:31:26 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_if_not_percentage(const char *str, int *i, t_printf *f)
{
	while (*i < ft_strlen(str) && str[*i] && str[*i] != '%')
	{
		ft_putchar_f(str[(*i)++], f);
	}
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

int		ft_return_minus_one_if_error(char c)
{
	if (!c)
		return (-1);
	return (0);
}


int		ft_parse_format(const char *str, t_printf *format, int i, int *j)
{
	ft_reset(format);
	while (ft_is_flag(str[i + *j]) && ft_is_charset("cspdiuxXnfge", str[i + *j]) \
== 0)
		ft_parse_flags(str[i + (*j)++], format);
	if (str[i + *j] && str[i + *j] >= '0' && str[i + *j] <= '9')
		format->width = 0;
	while (str[i + *j] && str[i + *j] >= '0' && str[i + *j] <= '9')
		format->width = format->width * 10 + str[i + (*j)++] - 48;	
	if (!str[i + *j])
		return (-1);
	if (str[i + *j] && str[i + *j] == '.')
	{
		(*j)++;
		format->precision = 0;
		while (str[i + *j] && str[i + *j] >= '0' && str[i + *j] <= '9')
			format->precision = format->precision * 10 + str[i + (*j)++] - 48;
	}
	if (!str[i + *j])
		return (-1);
	format->conv_spec = str[i + *j];
	ft_parse_length(str[i + *j - 2], str[i + *j - 1], format);
	while (str[i + *j] && ft_is_conv_spec(str[i + *j]) != 1)
		(*j)++;
	return (ft_return_minus_one_if_error(str[i + *j]));
}
