/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_exp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:17:17 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/30 00:37:02 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_int_dec(double n, double nb, int def_pr, t_printf *f)
{
	long long	int_part;
	long long	dec_part;

	int_part = (long long)nb;
	dec_part = (long long)((nb - int_part)*ft_ten_power(def_pr + 1));
	dec_part = ft_exp_rounding(dec_part, def_pr);
	ft_putnbr(int_part);
	if (f->precision || (!f->precision && f->alternate))
		ft_putchar('.');
	ft_zeros_after_dot_exp(ft_abs(n), dec_part, f);
	if (ft_abs(dec_part) > 0)
		ft_putnbr(ft_abs(dec_part));
}

void	ft_calc_exp(double *nb, int *exp)
{
	if (*nb >= 1 || *nb == 0)
	{
		while (*nb >= 10)
		{
			(*exp)++;
			*nb /= 10;
		}
	}
	else if (*nb < 1)
	{
		while (*nb < 1)
		{
			(*exp)--;
			*nb *= 10;
		}
	}
}

int	ft_count_dec_size(long long *dec_part)
{
	int	dec_size;

	dec_size = 0;
	while (*dec_part > 0)
	{
		dec_size++;
		*dec_part = *dec_part / 10;
	}
	return (dec_size);
}

int	ft_count_expsize(double n, t_printf *f)
{
	double	nb;
	int		f_size;

	nb = ft_abs(n);
	f_size = 0;
	if (n < 0 || f->space || f->plus)
		f_size = 1;
	if (f->precision < 0)
		return ((f_size + 1 + 1 + 6 + 4));
	if (f->precision >= 0)
		return (f_size + 1 + 1 + f->precision + 4);
	return (f_size);
}
