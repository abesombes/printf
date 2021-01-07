/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parsing_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 23:10:13 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/06 17:23:11 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_stars(const char *str, t_printf *format, va_list *va)
{
	int 			i;

	i = 1;
	while (str[i] && str[i] != '*' && !ft_is_charset("cspdiuxXnfge%", str[i]))
		i++;	
	if (format->star == 2)
	{
		format->width = va_arg(*va, int);
		if (format->width < 0)
		{
			format->minus = 1;
			format->width = -format->width;
		}
		while (str[i] && str[i] != '*')
			i++;
		format->precision = va_arg(*va, int);
	}
	else if (format->star == 1)
	{
		if (str[i] && str[i] == '*')
		{
			if (str[i - 1] == '.')
				format->precision = va_arg(*va, int);
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
}
