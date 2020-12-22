/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 22:23:33 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/22 21:41:13 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void ft_put_str(char *s, t_printf *f, int s_size)
{
	printf("f->width: %i - s_size: %i", f->width, s_size);
	if (!f->minus && f->width > s_size && !f->zero)
		ft_print_char(f->width - s_size, ' ');
	else if (!f->minus && f->width > s_size && f->zero)
		ft_print_char(f->width - s_size, '0');
	if (f->precision >= 0)
		ft_putstrn(s, f->precision);
	else
		ft_putstr(s);
	if (f->width > s_size && f->minus)
		ft_print_char(f->width - s_size, ' ');
}
