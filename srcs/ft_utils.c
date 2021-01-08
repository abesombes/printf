/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:45:17 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 14:34:36 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_charsize(long long nb, t_printf *format)
{
	int			size;
	t_printf	f;
	long long	n;

	f = *format;
	n = nb;
	size = 0;
	nb = ft_abs(nb);
	while (nb > 9)
	{
		size++;
		nb = nb / 10;
	}
	if (nb != 0 || format->preci != 0)
		size++;
	size = ft_max(f.preci, size);
	if (n < 0 || f.space || f.plus)
		size++;
	return (size);
}

int	ft_count_pad_lzeros(double nb, t_printf *f)
{
	int			plz;
	long long	n;
	int			n_digits;

	n = nb;
	plz = 0;
	if (ft_is_charset("pxX", f->conv_s))
		n_digits = ft_count_hex_digits(nb, f);
	else if (ft_is_charset("f", f->conv_s))
		n_digits = ft_count_floatsize(nb, f);
	else if (ft_is_charset("e", f->conv_s))
		n_digits = ft_count_expsize(nb, f);
	else
		n_digits = ft_count_digits(nb, f);
	if (f->minus || (f->zero && (f->preci >= 0)))
		return (0);
	plz = ft_max(f->preci, n_digits);
	if ((f->conv_s == 'p' || (ft_is_charset("xX", f->conv_s) && \
	f->alter)) && f->zero)
		return (0);
	if (!ft_is_charset("epfxX", f->conv_s) && (n < 0 || f->space || f->plus))
		plz++;
	if (!f->zero)
		return (0);
	return (f->width - plz);
}

int	ft_count_pad_lspaces(double nb, t_printf *f)
{
	int			pls;
	long long	n;
	int			n_digits;

	n = nb;
	pls = 0;
	if (ft_is_charset("pxX", f->conv_s))
		n_digits = ft_count_hex_digits(nb, f);
	else if (ft_is_charset("efg", f->conv_s))
		n_digits = ft_count_floatsize(nb, f);
	else
		n_digits = ft_count_digits(nb, f);
	if ((f->minus && n_digits) || (f->zero && f->preci < 0) || \
		(f->conv_s == 'f' && f->zero && f->width > f->preci && !f->minus))
		return (0);
	pls = ft_max(f->preci, n_digits);
	if (f->conv_s == 'p' || (ft_is_charset("xX", f->conv_s) && f->alter))
		pls = pls + 2;
	else if (f->conv_s == 'e')
		return (f->width - ft_count_expsize(nb, f));
	else if ((ft_is_charset("di", f->conv_s)) && (n < 0 || f->space || f->plus))
		pls++;
	if (ft_is_charset("udixX", f->conv_s) && (int)nb == 0 && f->preci == 0)
		return (f->width);
	return (f->width - pls);
}

int	ft_count_pad_rspaces(double nb, t_printf *format)
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
	if (ft_is_charset("pxX", f.conv_s))
		n_digits = ft_count_hex_digits(nb, format);
	else
	{
		n_digits = ft_count_digits(nb, format);
		if (n < 0 || f.space || f.plus)
			extra++;
	}
	if (f.minus)
		return (ft_max(f.width - f.preci, f.width - n_digits) - extra);
	return (0);
}

int	ft_count_digits(long long n, t_printf *f)
{
	long long	nb;
	int			n_digit;

	n_digit = 0;
	nb = ft_abs(n);
	while (nb > 9)
	{
		n_digit++;
		nb = nb / 10;
	}
	if (n != 0 || !ft_is_charset("udixX", f->conv_s) || f->preci != 0)
		n_digit++;
	return (n_digit);
}
