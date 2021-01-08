/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_precision.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 19:07:23 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/08 19:22:43 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_extract_precision(const char *str, int i, int *j, t_printf *format)
{
	format->preci = 0;
	while (str[i + *j] && str[i + *j] >= '0' && str[i + *j] <= '9')
		format->preci = format->preci * 10 + str[i + (*j)++] - 48;
}
