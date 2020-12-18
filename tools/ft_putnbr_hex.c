/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 13:58:43 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/17 23:13:01 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_hexnbr_block(long long n, t_printf *format, int n_size);
void	ft_putnbr_hex(long long n, t_printf *format, int n_size);

void	ft_print_hexnbr_block(long long n, t_printf *f, int n_size)
{
	int n_digits;
	long long nb;
	char c;

	n_digits = ft_count_digits(n);
	if (f->precision > n_digits)
		ft_print_char(f->precision - n_digits, '0');
	else if (f->precision < 0 && f->zero && !f->minus && f->width > n_size)
		ft_print_char(f->width - n_size, '0');
	if (f->alternate && f->width > n_size && f->zero && f->precision < 0)
	{
		write(1, (f->uc_x ? "0X" : "0x"), 2);
		n_size++;
	}
	if (f->conv_spec == 'p' && f->uc_x && ((f->space && !f->zero) || f->precision >= 0 || f->alternate))
		write(1, "0X", 2);
	else if (f->conv_spec == 'p' && ((f->space && !f->zero) || f->precision >= 0 || f->alternate))
		write(1, "0x", 2);
	if (f->uc_x)
		ft_put_nbr_hexa_uc(n);
	else
		ft_put_nbr_hexa_lc(n);
}

void ft_putnbr_hex(long long n, t_printf *f, int n_size) 
{
	int upper_case_x;
	int pls;
	int plz;

	pls = ft_count_padding_left_spaces(n, f);
	plz = ft_count_padding_left_zeros(n, f);
	upper_case_x = 0;
	if (ft_is_charset("xX", f->conv_spec))
			f->plus = 0;
	if (f->conv_spec == 'p' && f->alternate)
		f->alternate = 0;
	if (f->conv_spec == 'X')
	   upper_case_x = 1;
	if (ft_is_charset("xX", f->conv_spec) && f->alternate)
			f->conv_spec = 'p';
	if (!f->minus && f->width > n_size && pls > 0)
		ft_print_char(pls, ' ');
	else if (!f->minus && f->width > n_size && plz > 0)
		ft_print_char(plz, '0');
	ft_print_hexnbr_block(n, f, n_size);
	if (f->width > n_size && f->minus)
		ft_print_padding_right(n, f, n_size);
}

