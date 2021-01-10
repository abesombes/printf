/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parse_stars.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:51:10 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/08 17:51:14 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_stars(const char *str, t_printf *format, va_list *va)
{
	int	i;

	i = 1;
	while (str[i] && str[i] != '*' && !ft_is_charset("cspdiuxXnfge%", str[i]))
		i++;
	if (format->star == 2)
		ft_parse_two_stars(str, format, va, &i);
	else if (format->star == 1)
		ft_parse_one_star(str, format, va, &i);
}

void	ft_parse_one_star(const char *str, t_printf *format, va_list *va, \
		int *i)
{
	if (str[*i] && str[*i] == '*')
	{
		if (str[*i - 1] == '.')
			format->preci = va_arg(*va, int);
		else
		{
			format->width = va_arg(*va, int);
			if (format->width < 0)
			{
				format->minus = 1;
				format->width = -format->width;
			}
		}
	}
}

void	ft_parse_two_stars(const char *str, t_printf *format, va_list *va, \
		int *i)
{
	format->width = va_arg(*va, int);
	if (format->width < 0)
	{
		format->minus = 1;
		format->width = -format->width;
	}
	while (str[*i] && str[*i] != '*')
		(*i)++;
	format->preci = va_arg(*va, int);
}
