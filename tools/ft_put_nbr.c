/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:31:22 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/17 17:46:26 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_char(int n, char c);
void	ft_print_nbr_block(long long n, t_printf *format, int n_size);
void	ft_print_padding_left(long long n, t_printf *format, int n_size);
void	ft_print_padding_right(long long n, t_printf *format, int n_size);
void	ft_put_nbr(long long n, t_printf *format, int n_size);

void	ft_print_nbr_block(long long n, t_printf *format, int n_size)
{	
	int n_digits;
	long long nb;
	char c;
	t_printf f;

	f = *format;
	if (f.plus && n >= 0)
	   	write(1, "+", 1);
	else if (f.space && n >= 0)
		write(1, " ", 1);
	else if (n < 0)
		write(1, "-", 1);
	n_digits = ft_count_digits(n);
	nb = (n < 0 ? -n : n);
	if (f.precision > n_digits)
		ft_print_char(f.precision - n_digits, '0');
	else if (f.plus && f.zero && !f.minus && f.width > n_size)
		ft_print_char(f.width - n_size, '0');
	else if (f.precision < 0 && f.zero && !f.minus && n < 0 && f.width > n_size)
		ft_print_char(f.width - n_size, '0');
	ft_putnbr(nb);	
}

void	ft_print_char(int n, char c)
{
	while (n-- > 0)
		write(1, &c, 1);
}

void	ft_print_padding_left(long long n, t_printf *format, int n_size)
{
	t_printf f;
	int pls;
	int plz;

	plz = ft_count_padding_left_zeros(n, format);
	pls = ft_count_padding_left_spaces(n, format);
	f = *format;
	if (!f.minus && f.width > n_size)
	{
		if (f.zero && f.precision == -1)
			ft_print_char(plz, '0');
		else
			ft_print_char(pls, ' ');
	}
}

void	ft_print_padding_right(long long n, t_printf *format, int n_size)
{
	ft_print_char(format->width - n_size, ' ');
}

void	ft_put_nbr(long long n, t_printf *format, int n_size)
{
	t_printf f;
	int pls;
	int plz;

	pls = ft_count_padding_left_spaces(n, format);
	plz = ft_count_padding_left_zeros(n, format);
	f = *format;
	if (!f.minus && f.width > n_size && pls > 0)
		ft_print_char(pls, ' ');
	else if (!f.minus && f.width > n_size && plz > 0) 
		ft_print_char(plz, '0');
	ft_print_nbr_block(n, format, n_size);
	if (f.width > n_size && f.minus)
		ft_print_padding_right(n, format, n_size);
}
