/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parse_flags.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 19:12:53 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/08 19:12:57 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_parse_flags(char flag, t_printf *f)
{
	if (flag == '-')
		f->minus = 1;
	else if (flag == '+')
		f->plus = 1;
	else if (flag == '0')
		f->zero = 1;
	else if (flag == ' ')
		f->space = 1;
	else if (flag == '#')
		f->alter = 1;
	else if (flag == '*')
		f->star++;
}
