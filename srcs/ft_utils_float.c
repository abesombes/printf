/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 10:30:49 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/04 21:50:43 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_increment_fsize(int *f_size, t_printf *f, long long dec_part)
{
	if (dec_part > 0)
		*f_size += ft_count_digits(dec_part, f) + 1;
	if (dec_part == 0 && f->alter)
		(*f_size)++;
}

int		ft_count_floatsize(double n, t_printf *f)
{
	double		nb;
	int			i;
	int			f_size;
	long long	int_part;
	long long	dec_part;

	i = 6;
	nb = ft_abs(n);
	f_size = 0;
	if (n < 0 || f->space || f->plus)
		f_size = 1;
	int_part = (long long)nb;
	if (f->preci >= 0)
		i = f->preci;
	dec_part = (long long)((n - int_part) * ft_ten_power(i + 1));
	dec_part = ft_abs(ft_float_rounding(dec_part, int_part, i, n));
	if (f->preci < 0)
		return ((f_size += ft_count_digits(int_part, f) + 7));
	f_size += ft_count_digits(int_part, f);
	if (f->preci > 0)
		return (f_size += f->preci + 1);
	ft_increment_fsize(&f_size, f, dec_part);
	while (dec_part <= ft_ten_power(--i) && i > 0)
		f_size++;
	return (f_size);
}
