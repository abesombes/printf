/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:23:43 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/22 21:28:18 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_count_letters(char *str, t_printf *f)
{
	int n_letters;

	n_letters = 0;
	if (f->precision >= 0)
		n_letters = f->precision;
	else
		while (str[n_letters])
			n_letters++;
	return (n_letters);
}
