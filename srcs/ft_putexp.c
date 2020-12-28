/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 01:02:00 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/27 23:47:21 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_exp(double n, t_printf *f, int n_size)
{
	int pls;
	int plz;

	pls = ft_count_padding_left_spaces(n, f);
	plz = ft_count_padding_left_zeros(n, f);
	if (!f->minus && f->width > n_size && pls > 0)
		ft_print_char(pls, ' ');
	else if (!f->minus && f->width > n_size && plz > 0 && !(f->zero &&
				f->alternate))
		ft_print_char(plz, '0');
	ft_putexp(n, f);
	if (f->width > n_size && f->minus)
		ft_print_padding_right(n, f, n_size);
}

void ft_print_exp(int exp)
{
	write(1, "e", 1);
	if (exp >= 0)
		write(1, "+", 1);
	else
	{
		write(1, "-", 1);
		exp = -exp;
	}
	if (exp < 10)
	{
		write(1, "0", 1);
		ft_putchar(exp + 48);
	}
	else 
		ft_putnbr(exp);
}
long long ft_exp_rounding(long long dec_part, int def_pr)
{
	if (dec_part % 10 > 4)
		return ((dec_part / 10) + 1);
	return (dec_part / 10);
}

void	ft_zeros_after_dot_exp(double n, long long dec_part, t_printf *f)
{
	int def_pr;
	int i;
	double nb;
	int dec_size;

	dec_size = 0;
	while (dec_part > 0)
	{
 		dec_size++;	
		dec_part = dec_part / 10;
	}
	def_pr = (f->precision < 0 ? 6 : f->precision);
	i = 1;
	nb = n;
	while (nb > 9)
	{
		if ((long long)nb % 10 == 0)
			write(1, "0", 1);
		def_pr--;
		nb = nb / 10;	
	}
	while (((long long)(n * ft_ten_power(i)) % ft_ten_power(i)) == 0 && i <= def_pr - dec_size)
	{
		write(1, "0", 1);
		i++;
	}
}

void	ft_putexp(double n, t_printf *f)
{
	double		nb;
	int			def_pr;
	long long	int_part;
	long long	dec_part;
	long long	checkz;
	int exp;

	exp = 0;
	def_pr = 6;
	nb = (n < 0 ? -n : n);
	ft_prefix(n, f);
	checkz = f->width - ft_count_expsize(n, f) - ft_max(
	ft_count_padding_left_spaces(n, f), ft_count_padding_left_zeros(n, f));
	if (f->precision >= 0)
	   def_pr = f->precision;	
	if (checkz > 0 && !f->minus)
		ft_print_char(checkz, '0');
	if (nb >= 1 || nb == 0)
		while (nb > 10)
		{
			exp++;
			nb /= 10;
		}
	else if (nb < 1)
		while (nb < 1)
		{
			exp--;
			nb *= 10;
		}
	int_part = (long long)nb;
	dec_part = (long long)((nb - int_part) * ft_ten_power(def_pr + 1));
	dec_part = ft_exp_rounding(dec_part, def_pr);
	ft_putnbr(int_part);
	if (f->precision || (!f->precision && f->alternate))
		ft_putchar('.');
	ft_zeros_after_dot_exp(ft_abs(n), dec_part, f); 
	if (ft_max(dec_part, -dec_part) > 0)
		ft_putnbr(ft_max(dec_part, -dec_part));
	ft_print_exp(exp);
}
