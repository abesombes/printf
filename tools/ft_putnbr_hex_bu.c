/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 13:58:43 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/15 01:30:59 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void ft_put_nbr_hexa_lc(long long i)
{
	if (i > 15)
		ft_put_nbr_hexa_lc(i / 16);
	ft_putchar("0123456789abcdef"[(int)(i % 16)]);	
}

void ft_put_nbr_hexa_uc(long long i)
{
	if (i > 15)
		ft_put_nbr_hexa_uc(i / 16);
	ft_putchar("0123456789ABCDEF"[(int)(i % 16)]);	
}

void ft_putnbr_hex(long long i, t_printf *format) 
{
	long long j;
	int n_size;
	int upper_case_x;

	j = i * 15;
	upper_case_x = 0;
	if (ft_is_charset("xX", format->conv_spec))
			format->plus = 0;
	if (format->conv_spec == 'p' && format->alternate)
		format->alternate = 0;
	if (format->conv_spec == 'X')
	   upper_case_x = 1;
	if (ft_is_charset("xX", format->conv_spec) && format->alternate)
			format->conv_spec = 'p';
	n_size = (format->conv_spec == 'p' ? 2 : 1);
	while ((j /= 15) > 15)
		n_size++;
	if (format->alternate && format->width > n_size && format->zero && format->precision < 0)
	{
		write(1, (upper_case_x ? "0X" : "0x"), 2);
		n_size++;
	}
	ft_print_formating_before(i, format, n_size);
	if (format->conv_spec == 'p' && upper_case_x && ((format->space && !format->zero) || format->precision >= 0 || format->alternate))
		write(1, "0X", 2);
	else if (format->conv_spec == 'p' && ((format->space && !format->zero) || format->precision >= 0 || format->alternate))
		write(1, "0x", 2);
	if (upper_case_x)
		ft_put_nbr_hexa_uc(i);
	else
		ft_put_nbr_hexa_lc(i);
	if (format->width > n_size && format->minus)
		ft_print_after(format->width - n_size, ' ');
}
