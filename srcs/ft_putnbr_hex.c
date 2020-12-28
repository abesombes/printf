/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 13:58:43 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/20 00:43:13 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_hexnbr_block(long long n, t_printf *format, int n_size);
void	ft_putnbr_hex(long long n, t_printf *format, int n_size);

void	ft_print_hexnbr_block(long long n, t_printf *f, int n_size)
{
	int n_digits;

	n_digits = ft_count_hex_digits(n);
//	printf("n_digits: %i - alternate: %i - f->width: %i - n_size: %i - f->precision: %i", n_digits, f->alternate, f->width, n_size, f->precision);
	if (f->precision > n_digits)
	{
		if (f->alternate || f->conv_spec == 'p')
		{
			write(1, (f->uc_x ? "0X" : "0x"), 2);
			f->alternate = 0;
		}
		ft_print_char(f->precision - n_digits, '0');
	}
	else if (f->alternate && f->width > n_size && f->precision < 0)
		write(1, (f->uc_x ? "0X" : "0x"), 2);
	else if (f->conv_spec == 'p' && f->uc_x && ((f->space && !f->zero) || f->precision >= 0 || f->alternate))
		write(1, "0X", 2);
	else if (f->conv_spec == 'p')
		write(1, "0x", 2);
	if (f->conv_spec == 'p' && f->precision <= n_digits && !ft_count_padding_right_spaces(n ,f) && f->width > ft_max(ft_count_padding_left_spaces(n, f), ft_count_padding_left_zeros(n, f) + n_size))
		ft_print_char(f->width - n_size, '0');
	if (f->uc_x)
		ft_put_nbr_hexa_uc(n);
	else
		ft_put_nbr_hexa_lc(n);
}

void ft_putnbr_hex(long long n, t_printf *f, int n_size) 
{
	int pls;
	int plz;

	pls = ft_count_padding_left_spaces(n, f);
	plz = ft_count_padding_left_zeros(n, f);
//	printf("pls: %i - plz: %i - conv_spec: %c - precision: %i - ", pls, plz, f->conv_spec, f->precision);
	if (!f->minus && f->width > n_size && pls > 0)
		ft_print_char(pls, ' ');
	else if (!f->minus && f->width > n_size && plz > 0 && !(f->zero && f->alternate))
		ft_print_char(plz, '0');
	if (f->precision < 0 && f->zero && f->alternate && f->width > n_size)
		f->precision = f->width - 2;
	ft_print_hexnbr_block(n, f, n_size);
	if (f->width > n_size && f->minus)
		ft_print_padding_right(n, f, n_size);
}
