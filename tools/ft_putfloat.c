/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:10:39 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/20 20:02:05 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_float(double n, t_printf *f, int n_size)
{
	int pls;
	int plz;

	pls = ft_count_padding_left_spaces(n, f);
	plz = ft_count_padding_left_zeros(n, f);
	printf("pls: %i - plz: %i", pls, plz);
	if (!f->minus && f->width > n_size && pls > 0)
		ft_print_char(pls, ' ');
	else if (!f->minus && f->width > n_size && plz > 0 && !(f->zero &&
				f->alternate))
		ft_print_char(plz, '0');
	ft_putfloat(n, f);
	if (f->width > n_size && f->minus)
		ft_print_padding_right(n, f, n_size);
}

void	ft_prefix(double n, t_printf *f)
{
	if (f->plus && n >= 0)
		write(1, "+", 1);
	else if (f->space && n >= 0)
		write(1, " ", 1);
	else if (n < 0)
		write(1, "-", 1);
}

void	ft_zeros_after_dot(double n, long long dec_part, t_printf *f)
{
	int def_pr;

	if (f->precision < 0)
		def_pr = 6;
	else
		def_pr = f->precision;
	while (dec_part < ft_ten_power(def_pr--))
		write(1, "0", 1);
}

void	ft_putfloat(double n, t_printf *f)
{
	double		nb;
	int			def_pr;
	long long	int_part;
	long long	dec_part;
	long long	checkz;

	def_pr = 6;
	nb = (n < 0 ? -n : n);
	ft_prefix(n, f);
	checkz = f->width - ft_count_floatsize(n, f) - ft_max(
	ft_count_padding_left_spaces(n, f), ft_count_padding_left_zeros(n, f));
	if (f->precision >= 0)
	   def_pr = f->precision;	
	if (checkz > 0 && !f->minus)
		ft_print_char(checkz, '0');
	int_part = (long long)nb;
	dec_part = (long long)((n - int_part) * ft_ten_power(def_pr + 1));
	printf("dec_part: %lli", dec_part);
	checkz = dec_part;
	if (dec_part % 10 > 4)
		dec_part = (long long)((n - int_part) * ft_ten_power(def_pr)) + 1;
	else
		dec_part = (long long)((n - int_part) * ft_ten_power(def_pr));
	ft_putnbr(int_part);
	if (f->precision)
		ft_putchar('.');
	ft_zeros_after_dot(n, checkz, f);
	ft_putnbr(ft_max(dec_part, -dec_part));
}
