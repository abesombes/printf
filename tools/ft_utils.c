/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:45:17 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/17 16:30:22 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_max(int a, int b)
{
	return (a > b? a : b);
}

int ft_count_charsize(long long nb, t_printf *format)
{
	int size;
	t_printf f;
	long long n;

	f = *format;
	n = nb;
	size = 0;
   	if (nb < 0)	
		nb = -nb;
	while (nb > 9)
	{
		size++;
		nb = nb / 10;
	}
	size++;
	if (f.precision >= size)
		size = f.precision;
	if (n < 0 || f.space || f.plus)
		size++;	
	return (size);
}

int ft_count_padding_left_zeros(long long nb, t_printf *format)
{
	int plz;
	t_printf f;
	long long n;
	int n_digits;

	f = *format;
	n = nb;
	plz = 0;
	n_digits = ft_count_digits(nb);
	if (f.minus || (f.zero && (f.precision >= 0 || n < 0)))
		return (0);
	plz = ft_max(f.precision, n_digits);
	if (n < 0 || f.space || f.plus)
		plz++;
	if (f.plus && f.zero && f.width > plz)
		return (0);
	return (f.width - plz);
} 

int ft_count_padding_left_spaces(long long nb, t_printf *format)
{
	int pls;
	t_printf f;
	long long n;
	int n_digits;

	f = *format;
	n = nb;
	pls = 0;
	n_digits = ft_count_digits(nb);
	if (f.minus || (f.zero && f.precision < 0))
		return (0);
	pls = ft_max(f.precision, n_digits);
	if (n < 0 || f.space || f.plus)
		pls++;
	return (f.width - pls);
}

int ft_count_padding_right_spaces(long long nb, t_printf *format)
{
	int prs;
	int extra;
	t_printf f;
	long long n;
	int n_digits;

	f = *format;
	n = nb;
	prs = 0;
	extra = 0;
	n_digits = ft_count_digits(nb);
	if (n < 0 || f.space || f.plus)
		extra++;
	if (f.minus)
		return (ft_max(f.width - f.precision, f.width - n_digits) - extra);
	return (0);
}

int ft_count_digits(long long n)
{
	long long nb;
	int n_digit;

	n_digit = 0;
	nb = (n < 0 ? -n : n);
	while (nb > 9)
 	{
		n_digit++;
		nb = nb / 10;
	}
	n_digit++;
	return (n_digit);
}
