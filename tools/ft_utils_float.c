/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 10:30:49 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/24 15:40:00 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

long long ft_ten_power(int nb)
{
	long long res;
	int i;

	i = 0;
	res = 1;
	while (i++ < nb)
		res *= 10;
	return (res);
}

int	ft_count_floatsize(double n, t_printf *f)
{
	double	nb;
	int		i;
	int f_size;
	long long int_part;
	long long dec_part;

	i = 6;
	nb = (n < 0 ? -n : n);
	f_size = (n < 0 || f->space || f->plus ? 1 : 0);	
	int_part = (long long)nb;
	if (f->precision >= 0)
		i = f->precision;
	dec_part = (long long)((n - int_part) * ft_ten_power(i + 1));
	if (dec_part % 10 > 4)
		dec_part = (long long)((n - int_part) * ft_ten_power(i)) + 1;
	else
		dec_part = (long long)((n - int_part) * ft_ten_power(i));
	dec_part = ft_max(dec_part, -dec_part);
	if (f->precision < 0)
		return ((f_size += ft_count_digits(int_part) + 7));
	f_size += ft_count_digits(int_part) + ft_count_digits(dec_part) + 1;
	while (dec_part <= ft_ten_power(--i) && i > 0)
		f_size++;
	return (f_size);
}
