/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 22:21:11 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 19:22:27 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_ptr_pad_lzeros(double nb, t_printf *f)
{
	int			plz;
	long long	n;
	int			n_digits;

	n = nb;
	plz = 0;
	n_digits = ft_count_ptr_hex_digits(nb);
	if (f->minus || (f->zero && (f->precision >= 0 || n < 0 || nb < 0)))
		return (0);
	plz = ft_max(f->precision, n_digits);
	if (f->conv_spec == 'p' && f->zero)
		return (0);
	if (!ft_is_charset("p", f->conv_spec) && (n < 0 || f->space || f->plus))
		plz++;
	if (f->plus && f->zero && f->width > plz)
		return (0);
	return (f->width - plz);
}

int	ft_count_ptr_pad_lspaces(double nb, t_printf *f)
{
	int			pls;
	long long	n;
	int			n_digits;

	n = nb;
	pls = 0;
	n_digits = ft_count_ptr_hex_digits(nb);
	if (f->minus || (f->zero && f->precision < 0))
		return (0);
	pls = ft_max(f->precision, n_digits) + 2;
	return (f->width - pls);
}

int	ft_count_ptr_pad_rspaces(double nb, t_printf *format)
{
	int			prs;
	int			extra;
	t_printf	f;
	long long	n;
	int			n_digits;

	f = *format;
	n = nb;
	prs = 0;
	extra = 0;
	if (ft_is_charset("p", f.conv_spec))
		n_digits = ft_count_hex_digits(nb, format);
	if (f.minus)
		return (ft_max(f.width - f.precision, f.width - n_digits) - extra);
	return (0);
}
