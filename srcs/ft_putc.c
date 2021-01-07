/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 12:12:45 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 10:43:19 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_padlspaces(t_printf *f)
{
	if (f->minus)
		return (0);
	if (f->width > 1)
		return (f->width - 1);
	return (0);
}

int	ft_count_padlzeros(t_printf *f)
{
	if (f->zero && (f->conv_spec == '%' || f->conv_spec == 0 || !f->minus))
		return (f->width - 1);
	return (0);
}

int	ft_count_padrspaces(t_printf *f)
{
	if (f->minus)
		return (f->width - 1);
	return (0);
}

void	ft_putc(unsigned char c, t_printf *f)
{
	if (f->width < 0)
		f->minus = 1;
	f->width = ft_abs(f->width);
	if	(f->zero && !f->minus)
		ft_print_char(ft_count_padlzeros(f), '0', f);
	else
		ft_print_char(ft_count_padlspaces(f), ' ', f);
	ft_putchar_f(c, f);
	ft_print_char(ft_count_padrspaces(f), ' ', f);
}
