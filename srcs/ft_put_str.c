/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 22:23:33 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/02 01:00:46 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_str(char *s, t_printf *f, int s_size)
{
	if (!f->minus && f->width > s_size && !f->zero)
		ft_print_char(f->width - s_size, ' ', f);
	else if (!f->minus && f->width > s_size && f->zero)
		ft_print_char(f->width - s_size, '0', f);
	if (f->precision >= 0)
		ft_putstrn(s, f->precision);
	else
		ft_putstr_f(s, f);
	if (f->width > s_size && f->minus)
		ft_print_char(f->width - s_size, ' ', f);
}
