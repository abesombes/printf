/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parsing_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 23:10:13 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/05 00:36:54 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_stars(const char *str,  t_printf *format, va_list *va)
{
	int 			i;
	
	i = 0;
	if (format->star > 0)
	{
		while (str[i] && str[i] != '*')
			i++;
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
