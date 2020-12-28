/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_bu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:31:22 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/15 21:32:23 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

long long ft_max(long long a, long long b)
{
	return ((a > b ? a : b));
}

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
	int n10;
	int n_10;

	n10 = (n < 0 ? 1 : 0);
	n_10 = (n < 0 ? -1 : 0);
	if (format->space && !format->plus && n >= 0)
		write(1, " ", 1);	
	if (format->precision > n_size && format->width > format->precision)
	{
		if (!format->minus)
			ft_print_before(format->width - format->precision /*- (format->plus ? 1: 0)*/ - n10, 0, ' ');
		if (format->plus && n > 0)
			write(1, "+", 1);
		ft_print_before(format->precision - n_size + n10, n_10, '0');
	}
	else if (format->precision >= n_size && format->width <= format->precision)
	{
		if (format->plus && n > 0)
			ft_print_before(format->precision - n_size, -2, '0');
		else if (!format->space)
			ft_print_before(format->precision - n_size + n10, n_10, '0');
		else
			ft_print_before(format->precision - n_size, n_10, '0');
	}
	else if (format->precision >= 0 && format->width > n_size)
		ft_print_before(format->width - n_size, n10, ' ');
	else if (format->width > n_size && format->plus && format->minus && n > 0)
		write(1, "+", 1);
	else if (format->width <= n_size && format->plus && n > 0)
		write(1, "+", 1);
	else if (format->width > n_size && format->zero && format->plus && !format->minus)
		ft_print_before(format->width - n_size - (n < 0 ? 0 : 1), (n < 0 ? -1 : -2), '0');
	else if (format->width > n_size && format->zero && !format->minus)
		ft_print_before(format->width - n_size, n_10, '0');
	else if (format->width > n_size && format->plus && !format->minus)
		ft_print_before(format->width - n_size - (n > 0 ? 1 : 0), (n < 0 ? 1 : 2), ' ');
	else if (format->width > n_size && !format->zero && !format->minus)
		ft_print_before(format->width - n_size, n10, ' ');
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
	if (format->space && !format->plus && n >= 0)
		n_size++;
	ft_print_formating_before(n, format, n_size);
	if (format->space && format->precision >= 0)
		write(1, "0", 1);
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + 48;
	write(1, &c, 1);
	if (format->width > n_size && format->minus && !format->plus)
			ft_print_after(format->width - ft_max(n_size, format->precision) - format->space - (n < 0 ? 1 : 0), ' ');	
	else if (format->width > n_size && format->minus && format->plus)
			ft_print_after(format->width - ft_max(n_size, format->precision) - (n < 0 ? 0 : 1), ' ');	
}
