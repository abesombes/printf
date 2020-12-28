/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_exp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 13:17:17 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/27 14:16:46 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_expsize(double n, t_printf *f)
{
	double	nb;
	int f_size;

	nb = (n < 0 ? -n : n);
	f_size = (n < 0 || f->space || f->plus ? 1 : 0);	
	if (f->precision < 0)
		return ((f_size + 1 + 1 + 6 + 4));	
	if (f->precision >= 0)
		return (f_size + 1 + 1 + f->precision + 4); 
	return (f_size);
}
