/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_maths.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 19:38:28 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/03 00:09:26 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

long long	ft_max(long long a, long long b)
{
	if (a > b)
		return (a);
	return (b);
}

long long	ft_ten_power(int nb)
{
	long long	res;
	int			i;

	i = 0;
	res = 1;
	while (i++ < nb)
		res *= 10;
	return (res);
}

double	ft_abs(double nb)
{
	if (nb >= 0)
		return (nb);
	return (-nb);
}
