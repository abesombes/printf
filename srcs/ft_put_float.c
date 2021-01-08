/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:10:39 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/30 15:05:13 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_put_float(double n, t_printf *f, int n_size)
{
	int	pls;
	int	plz;

	pls = ft_count_pad_lspaces(n, f);
	plz = ft_count_pad_lzeros(n, f);
	if (!f->minus && f->width > n_size && pls > 0)
		ft_print_char(pls, ' ', f);
	else if (!f->minus && f->width > n_size && plz > 0 && !(f->zero && \
f->alter))
		ft_print_char(plz, '0', f);
	ft_putfloat(n, f);
	if (f->width > n_size && f->minus)
		ft_print_pad_right(f, n_size);
}

void		ft_prefix(double n, t_printf *f)
{
	if (f->plus && n >= 0)
		ft_putchar_f('+', f);
	else if (f->space && n >= 0)
		ft_putchar_f(' ', f);
	else if (n < 0)
		ft_putchar_f('-', f);
}

void		ft_zeros_after_dot(double n, t_printf *f)
{
	int	def_pr;
	int	i;

	if (f->preci < 0)
		def_pr = 6;
	else
		def_pr = f->preci;
	i = 1;
	while ((long long)(n * ft_ten_power(i)) % ft_ten_power(i) == 0 && \
i <= def_pr)
	{
		if ((long long)(n * ft_ten_power(i + 1)) % ft_ten_power(i + 1) >= 9)
			return ;
		else
			ft_putchar_f('0', f);
		i++;
	}
}

long long	ft_float_rounding(long long dec_part, long long int_part, \
	int def_pr, double n)
{
	if (dec_part % 10 > 4)
		dec_part = (long long)((ft_abs(n) - int_part) * ft_ten_power(def_pr)) \
		+ 1;
	else
		dec_part = (long long)((ft_abs(n) - int_part) * ft_ten_power(def_pr));
	return (dec_part);
}

void		ft_putfloat(double n, t_printf *f)
{
	double		nb;
	int			def_pr;
	long long	int_part;
	long long	dec_part;
	long long	checkz;

	def_pr = 6;
	nb = ft_abs(n);
	ft_prefix(n, f);
	checkz = f->width - ft_count_floatsize(n, f) - ft_max(\
ft_count_pad_lspaces(n, f), ft_count_pad_lzeros(n, f));
	if (f->preci >= 0)
		def_pr = f->preci;
	if (checkz > 0 && !f->minus)
		ft_print_char(checkz, '0', f);
	int_part = (long long)nb;
	dec_part = (long long)((ft_abs(n) - int_part) * ft_ten_power(def_pr + 1));
	dec_part = ft_float_rounding(dec_part, int_part, def_pr, n);
	ft_putnbr_f(int_part, f);
	if (f->preci || (!f->preci && f->alter))
		ft_putchar_f('.', f);
	ft_zeros_after_dot(n, f);
	if (ft_abs(dec_part) > 0)
		ft_putnbr_f(ft_abs(dec_part), f);
}
