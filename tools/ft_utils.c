/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:45:17 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/11 15:49:59 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_count_charsize(long long nb)
{
	int i;

	i = (nb < 0? 1: 0);
   	if (nb < 0)	
		nb = -nb;
	while (nb > 9)
	{
		i++;
		nb = nb / 10;
	}
	return (i + 1);
}
