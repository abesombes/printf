/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 13:58:43 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 15:50:09 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_0x(t_printf *f)
{
	if (f->uc_x)
		ft_putstr_f("0X", f);
	else
		ft_putstr_f("0x", f);
}

void	ft_print_hexa_uc_or_lc(long long n, t_printf *f)
{
	if (f->uc_x)
		ft_put_nbr_hexa_uc(n, f);
	else
		ft_put_nbr_hexa_lc(n, f);
}

void	ft_print_hexnbr_block(long long n, t_printf *f, int n_size)
{
	int	n_digits;

	n_digits = ft_count_hex_digits(n, f);
	if (f->preci > n_digits)
	{
		if ((f->alter && n > 0) || f->conv_s == 'p')
		{
			ft_print_0x(f);
			f->alter = 0;
		}
		ft_print_char(f->preci - n_digits, '0', f);
	}
	else if (f->alter && n > 0 && f->width > n_size && f->preci < 0)
		ft_print_0x(f);
	else if (f->conv_s == 'p' && f->uc_x && ((f->space && !f->zero) || \
f->preci >= 0 || f->alter))
		ft_putstr_f("0X", f);
	else if (f->conv_s == 'p')
		ft_putstr_f("0x", f);
	if (f->conv_s == 'p' && f->preci <= n_digits && \
!ft_count_pad_rspaces(n, f) && f->width > ft_max(ft_count_pad_lspaces(n, f), \
ft_count_pad_lzeros(n, f)) + n_size)
		ft_print_char(f->width - n_size, '0', f);
	if (n != 0 || f->preci != 0)
		ft_print_hexa_uc_or_lc(n, f);
}

void	ft_putnbr_hex(long long n, t_printf *f, int n_size)
{
	int	pls;
	int	plz;

	pls = ft_count_pad_lspaces(n, f);
	plz = ft_count_pad_lzeros(n, f);
	if (!f->minus && f->width > n_size && pls > 0)
		ft_print_char(pls, ' ', f);
	else if (!f->minus && f->width > n_size && plz > 0 \
	&& !(f->zero && f->alter))
		ft_print_char(plz, '0', f);
	ft_print_hexnbr_block(n, f, n_size);
	if (f->width > n_size && f->minus)
		ft_print_pad_right(f, n_size);
}
