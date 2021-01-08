/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 19:05:19 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/03 19:00:57 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstrn(char *str, int n, t_printf *f)
{
	int	i;

	i = 0;
	if (str == 0 && f->preci > 0)
		ft_putstrn("(null)", f->preci, f);
	else if (str != 0)
	{
		while (str[i] && i < n)
		{
			ft_putchar_f(str[i], f);
			i++;
		}
	}
}
