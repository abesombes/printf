/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:31:22 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/05 14:37:58 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_nbr_block(long long n, t_printf *f, int n_size)
{	
	int			n_digits;
	long long	nb;

	if (f->plus && n >= 0)
		ft_putchar_f('+', f);
	else if (f->space && n >= 0)
		ft_putchar_f(' ', f);
	else if (n < 0)
		ft_putchar_f('-', f);
	n_digits = ft_count_digits(n, f);
	nb = ft_abs(n);
	if (f->precision > n_digits)
		ft_print_char(f->precision - n_digits, '0', f);
	else if (f->plus && f->zero && !f->minus && f->width > n_size)
		ft_print_char(f->width - n_size, '0', f);
	else if (f->precision < 0 && f->zero && !f->minus && n < 0 && f->width > n_size)
		ft_print_char(f->width - n_size, '0', f);
	if (nb != 0 || f->precision !=0)
		ft_putnbr_f(nb, f);
}

void	ft_print_char(int n, char c, t_printf *f)
{
	while (n-- > 0)
		ft_putchar_f(c, f);
}

void	ft_print_pad_left(long long n, t_printf *format, int n_size)
{
	t_printf	f;
	int			pls;
	int			plz;

	plz = ft_count_pad_lzeros(n, format);
	pls = ft_count_pad_lspaces(n, format);
	f = *format;
	if (!f.minus && f.width > n_size)
	{
		if (f.zero && f.precision == -1)
			ft_print_char(plz, '0', format);
		else
			ft_print_char(pls, ' ', format);
	}
}

void	ft_print_pad_right(t_printf *format, int n_size)
{
	ft_print_char(format->width - n_size, ' ', format);
}

void	ft_put_nbr(long long n, t_printf *format, int n_size)
{
	t_printf	f;
	int			pls;
	int			plz;

	pls = ft_count_pad_lspaces(n, format);
	plz = ft_count_pad_lzeros(n, format);
	f = *format;
//	printf("format->conv_spec: %c - format->minus = %i - pls = %i - plz = %i - width = %i - n_size = %i - precision = %i", f.conv_spec, f.minus, pls, plz, f.width, n_size, f.precision);
	if ((!f.minus || (f.minus && !ft_count_digits(n, format))) && f.width > n_size && pls > 0)
		ft_print_char(pls, ' ', format);
	else if (!f.minus && f.width > n_size && plz > 0)
		ft_print_char(plz, '0', format);
	ft_print_nbr_block(n, format, n_size);
	if (f.width > n_size && f.minus && (!ft_is_charset("diuxX", f.conv_spec) || ft_count_digits(n, format)))
		ft_print_pad_right(format, n_size);
}
