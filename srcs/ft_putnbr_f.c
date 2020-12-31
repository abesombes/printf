/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 14:13:12 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/30 15:09:24 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_f(long long n, t_printf *f)
{
	unsigned long long int	nb;
	char			c;

	nb = ft_abs(n);
	if (n < 0)
		ft_putchar_f('-', f);
	if (nb > 9)
	{
		ft_putnbr_f(nb / 10, f);
		f->displayed++;
	}
	c = (nb % 10) + 48;
	ft_putchar_f(c, f);
}
