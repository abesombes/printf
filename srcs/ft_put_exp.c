/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_exp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 01:02:00 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/02 00:56:22 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_put_exp_before_after(double n, t_printf *f, int n_size)
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
	ft_putexp(n, f);
	if (f->width > n_size && f->minus)
		ft_print_pad_right(f, n_size);
}

void		ft_print_exp(int exp, t_printf *f)
{
	ft_putchar_f('e', f);
	if (exp >= 0)
		ft_putchar_f('+', f);
	else
	{
		ft_putchar_f('-', f);
		exp = -exp;
	}
	if (exp < 10)
	{
		ft_putchar_f('0', f);
		ft_putchar_f(exp + 48, f);
	}
	else
		ft_putnbr_f(exp, f);
}

long long	ft_exp_rounding(long long dec_part)
{
	if (dec_part % 10 > 4)
		return ((dec_part / 10) + 1);
	return (dec_part / 10);
}

void		ft_zeros_after_dot_exp(double n, long long dec_part, t_printf *f)
{
	int		def_pr;
	int		i;
	double	nb;
	int		dec_size;

	dec_size = ft_count_dec_size(&dec_part);
	if (f->preci < 0)
		def_pr = 6;
	else
		def_pr = f->preci;
	i = 1;
	nb = n;
	while (nb > 9)
	{
		if ((long long)nb % 10 == 0)
			ft_putchar_f('0', f);
		def_pr--;
		nb = nb / 10;
	}
	while (((long long)(n * ft_ten_power(i)) % ft_ten_power(i)) == 0 && \
i <= def_pr - dec_size)
	{
		ft_putchar_f('0', f);
		i++;
	}
}

void		ft_putexp(double n, t_printf *f)
{
	double		nb;
	int			def_pr;
	long long	checkz;
	int			exp;

	exp = 0;
	def_pr = 6;
	nb = ft_abs(n);
	ft_prefix(n, f);
	checkz = f->width - ft_count_expsize(n, f) - ft_max(\
ft_count_pad_lspaces(n, f), ft_count_pad_lzeros(n, f));
	if (f->preci >= 0)
		def_pr = f->preci;
	if (checkz > 0 && !f->minus)
		ft_print_char(checkz, '0', f);
	ft_calc_exp(&nb, &exp);
	ft_print_int_dec(n, nb, def_pr, f);
	ft_print_exp(exp, f);
}
