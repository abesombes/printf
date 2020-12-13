/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:10:39 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/11 14:03:43 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putfloat(double n, t_printf *format)
{
	double	nb;
	int		i;
	long long int_part;
	int dec_part;
	char	c;

	nb = (n < 0 ? -n : n);
	if (n < 0)
		write(1, "-", 1);
	int_part = (long long int)nb;
	dec_part = (int)((n - int_part) * 10000000);
	if (dec_part % 10 > 4)
		dec_part = (int)((n - int_part) * 1000000) + 1;
	else
		dec_part = (int)((n - int_part) * 1000000);
	ft_putnbr(int_part);
	ft_putchar('.');
	ft_putnbr(dec_part);
}
