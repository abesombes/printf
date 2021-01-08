/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 17:50:20 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 11:42:29 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_nbr_hexa_lc(long long i, t_printf *f)
{
	if (i > 15)
		ft_put_nbr_hexa_lc(i / 16, f);
	ft_putchar_f("0123456789abcdef"[(int)(i % 16)], f);
}

void	ft_put_nbr_hexa_uc(long long i, t_printf *f)
{
	if (i > 15)
		ft_put_nbr_hexa_uc(i / 16, f);
	ft_putchar_f("0123456789ABCDEF"[(int)(i % 16)], f);
}

int		ft_count_hexsize(long long nb, t_printf *f)
{
	int			n_size;
	long long	n;

	n = nb;
	n_size = ft_count_hex_digits(nb, f);
	if (ft_is_charset("xX", f->conv_s))
		f->plus = 0;
	if (f->conv_s == 'p' && f->alter)
		f->alter = 0;
	if (f->conv_s == 'X')
		f->uc_x = 1;
	if (ft_is_charset("xX", f->conv_s) && f->alter && nb > 0)
		f->conv_s = 'p';
	if (f->preci >= n_size)
		n_size = f->preci;
	if (f->conv_s == 'p')
		n_size = n_size + 2;
	return (n_size);
}

int		ft_count_hex_digits(long long n, t_printf *f)
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
	if (n != 0 || f->preci != 0)
		n_digit++;
	return (n_digit);
}
