/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:23:43 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/03 19:11:11 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_letters(char *str, t_printf *f)
{
	int	n_letters;

	n_letters = 0;
	if (str == NULL)
		return (0);
	if (f->preci >= 0 && f->preci < ft_strlen(str))
		n_letters = f->preci;
	else
		while (str[n_letters])
			n_letters++;
	return (n_letters);
}
