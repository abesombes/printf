/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:31:22 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/13 13:36:19 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_before(int length, int minus_pos, char c)
{
	int i;

	i = -1;
	if (minus_pos == -1)
		write(1, "-", 1);
	if (minus_pos == -2)
		write(1, "+", 1);
	while (++i < length)
		write(1, &c, 1);
	if (minus_pos == 1)
		write(1, "-", 1);
	if (minus_pos == 2)
		write(1, "+", 1);
}

void	ft_print_after(int length, char c)
{
	int i;

	i = -1;
	while (++i < length)
		write(1, &c, 1);
}

void	ft_print_formating_before(long long n, t_printf *format, int n_size)
{
	if (format->precision >= 0 && format->width > n_size)
		ft_print_before(format->width - n_size, (n < 0 ? 1 : 0), ' ');
	else if (format->width > n_size && format->plus && format->minus && n > 0)
		write(1, "+", 1);
	else if (format->width <= n_size && format->plus && n > 0)
		write(1, "+", 1);
	else if (format->width > n_size && format->zero && format->plus && !format->minus)
		ft_print_before(format->width - n_size - (n < 0 ? 0 : 1), (n < 0 ? -1 : -2), '0');
	else if (format->width > n_size && format->zero && !format->minus)
		ft_print_before(format->width - n_size, (n < 0 ? -1 : 0), '0');
	else if (format->width > n_size && format->plus && !format->minus)
		ft_print_before(format->width - n_size - (n > 0 ? 1 : 0), (n < 0 ? 1 : 2), ' ');
	else if (format->width > n_size && !format->zero && !format->minus)
		ft_print_before(format->width - n_size, (n < 0 ? 1: 0), ' ');
	else if (n < 0)
		write(1, "-", 1);
}

void	ft_put_nbr(long long n, t_printf *format, int n_size)
{
	unsigned long long int	nb;
	int i;
	char			c;

	i = -1;
	nb = (n < 0 ? -n : n);
	ft_print_formating_before(n, format, n_size);
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + 48;
	write(1, &c, 1);
	if (format->width > n_size && format->minus && !format->plus)
			ft_print_after(format->width - n_size, ' ');	
	else if (format->width > n_size && format->minus && format->plus)
			ft_print_after(format->width - n_size - (n < 0 ? 0 : 1), ' ');	
}
