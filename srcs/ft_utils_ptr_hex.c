/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_ptr_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:53:09 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 19:19:27 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_ptr_nbr_hexa_lc(unsigned long long i, t_printf *f)
{
	if (i > 15)
		ft_put_ptr_nbr_hexa_lc(i / 16, f);
	ft_putchar_f("0123456789abcdef" [(int)(i % 16)], f);
}

int	ft_count_ptr_hexsize(unsigned long long nb, t_printf *f)

{
	int			n_size;
	unsigned long long	n;

	n = nb;
	n_size = ft_count_ptr_hex_digits(nb);
	if (f->conv_spec == 'p' && f->alternate)
		f->alternate = 0;
	if (f->precision >= n_size)
		n_size = f->precision;
	if (f->conv_spec == 'p')
		n_size = n_size + 2;
	return (n_size);
}

int	ft_count_ptr_hex_digits(unsigned long long n)
{
	int	n_digit;

	n_digit = 0;
	while (n > 15)
	{
		n_digit++;
		n = n / 16;
	//	printf("\nn = %llu\n", n);
	}
	n_digit++;
//	printf("n_digit: %i", n_digit);
	return (n_digit);
}
