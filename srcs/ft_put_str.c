/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 22:23:33 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/06 15:34:53 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_str(char *s, t_printf *f, int s_size)
{
	if (!f->minus && f->width > s_size && !f->zero)
		ft_print_char(f->width - s_size, ' ', f);
	else if (!f->minus && f->width > s_size && f->zero)
		ft_print_char(f->width - s_size, '0', f);
	if (f->preci >= 0)
		ft_putstrn(s, f->preci, f);
	else
		ft_putstr_f(s, f);
	if (!s && f->width >= 6 && f->preci > 0)
		s_size = s_size + f->preci;
	if (f->width > s_size && f->minus)
		ft_print_char(f->width - s_size, ' ', f);
}
