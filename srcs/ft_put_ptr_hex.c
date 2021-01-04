/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:42:08 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/03 22:32:46 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_ptr_hexnbr_block(unsigned long long n, t_printf *f, int n_size)
{
	int	n_digits;

	n_digits = ft_count_ptr_hex_digits(n);
	if (f->precision > n_digits)
	{
		if (f->alternate || f->conv_spec == 'p')
		{
			ft_print_0x(f);
			f->alternate = 0;
		}
		ft_print_char(f->precision - n_digits, '0', f);
	}
	else if (f->alternate && f->width > n_size && f->precision < 0)
		ft_print_0x(f);
	else if (f->conv_spec == 'p' && f->uc_x && ((f->space && !f->zero) || \
f->precision >= 0 || f->alternate))
		ft_putstr_f("0X", f);
	else if (f->conv_spec == 'p')
		ft_putstr_f("0x", f);
	if (f->conv_spec == 'p' && f->precision <= n_digits && \
!ft_count_ptr_pad_rspaces(n, f) && f->width > ft_max(ft_count_ptr_pad_lspaces(n, f), \
ft_count_ptr_pad_lzeros(n, f) + n_size))
		ft_print_char(f->width - n_size, '0', f);
	ft_put_ptr_nbr_hexa_lc(n, f);
}

void	ft_putptr_hex(unsigned long long n, t_printf *f, int n_size)
{
	int	pls;
	int	plz;

	pls = ft_count_ptr_pad_lspaces(n, f);
	plz = ft_count_ptr_pad_lzeros(n, f);	
	if (!f->minus && f->width > n_size && pls > 0)
		ft_print_char(pls, ' ', f);
	else if (!f->minus && f->width > n_size && plz > 0 && !(f->zero && f->alternate))
		ft_print_char(plz, '0', f);
	if (f->precision < 0 && f->zero && f->alternate && f->width > n_size)
		f->precision = f->width - 2;
	ft_print_ptr_hexnbr_block(n, f, n_size);
	if (f->width > n_size && f->minus)
		ft_print_pad_right(f, n_size);
}
