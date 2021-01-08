/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:54:56 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/08 21:29:46 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_extract_width(const char *str, int i, int *j, t_printf *format)
{
	if (str[i + *j] && str[i + *j] >= '0' && str[i + *j] <= '9')
		format->width = 0;
	while (str[i + *j] && str[i + *j] >= '0' && str[i + *j] <= '9')
		format->width = format->width * 10 + str[i + (*j)++] - 48;
}
