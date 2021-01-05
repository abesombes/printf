/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 17:50:20 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/05 19:09:41 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_nbr_hexa_lc(long long i, t_printf *f)
{
	if (i > 15)
		ft_put_nbr_hexa_lc(i / 16, f);
	ft_putchar_f("0123456789abcdef" [(int)(i % 16)], f);
}

void	ft_put_nbr_hexa_uc(long long i, t_printf *f)
{
	if (i > 15)
		ft_put_nbr_hexa_uc(i / 16, f);
	ft_putchar_f("0123456789ABCDEF" [(int)(i % 16)], f);
}

int	ft_count_hexsize(long long nb, t_printf *f)
{
	int			n_size;
	long long	n;

	n = nb;
	n_size = ft_count_hex_digits(nb, f);
	if (ft_is_charset("xX", f->conv_spec))
		f->plus = 0;
	if (f->conv_spec == 'p' && f->alternate)
		f->alternate = 0;
	if (f->conv_spec == 'X')
		f->uc_x = 1;
	if (ft_is_charset("xX", f->conv_spec) && f->alternate)
		f->conv_spec = 'p';
	if (f->precision >= n_size)
		n_size = f->precision;
	if (f->conv_spec == 'p')
		n_size = n_size + 2;
	return (n_size);
}

int	ft_count_hex_digits(long long n, t_printf *f)
{
	long long	nb;
	int			n_digit;

	n_digit = 0;
	nb = ft_abs(n);
	while (nb > 15)
	{
		n_digit++;
		nb = nb / 16;
	}
	if (n != 0 || f->precision != 0)
		n_digit++;
	return (n_digit);
}
