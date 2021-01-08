/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:34:28 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 22:01:12 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_reset(t_printf *format)
{
	format->conv_spec = 0;
	format->length = 0;
	format->width = -1;
	format->preci = -1;
	format->minus = 0;
	format->plus = 0;
	format->star = 0;
	format->sign_display = 0;
	format->space = 0;
	format->alter = 0;
	format->zero = 0;
	format->uc_x = 0;
}
