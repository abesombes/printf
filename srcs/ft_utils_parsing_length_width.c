/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parsing_length_width.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:49:32 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/08 17:49:42 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_if_not_percentage(const char *str, int *i, t_printf *f)
{
	while (*i < ft_strlen(str) && str[*i] && str[*i] != '%')
		ft_putchar_f(str[(*i)++], f);
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
	ft_reset_format(format);
	while (ft_is_a_flag_not_conv_s(str, i, j))
		ft_parse_flags(str[i + (*j)++], format);
	ft_extract_width(str, i, j, format);
	if (!str[i + *j])
		return (-1);
	if (str[i + *j] && str[i + *j] == '.')
	{
		(*j)++;
		if (str[i + *j] && str[i + *j] == '*')
		{
			format->star++;
			(*j)++;
		}
		ft_extract_precision(str, i, j, format);
	}
	if (!str[i + *j])
		return (-1);
	if (ft_is_conv_s(str[i + *j]))
	{
		format->conv_s = str[i + *j];
		ft_parse_length(str[i + *j - 2], str[i + *j - 1], format);
	}
	return (ft_return_minus_one_if_error(str[i + *j]));
}
