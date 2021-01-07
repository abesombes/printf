/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parsing.c                                 :+:      :+:    :+:   */
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
	format->precision = -1;
	format->minus = 0;
	format->plus = 0;
	format->star = 0;
	format->sign_display = 0;
	format->space = 0;
	format->alternate = 0;
	format->zero = 0;
	format->uc_x = 0;
}

int	ft_is_conv_spec(char c)
{
	char	*conv_spec;
	int		i;

	i = 0;
	conv_spec = "cspdiuxXnfge%";
	while (conv_spec[i] && conv_spec[i] != c)
		i++;
	if (i > 12)
		return (0);
	return (1);
}

int	ft_is_flag(char c)
{
	char	*flags;
	int		i;

	i = 0;
	flags = "*0+ -#lh";
	while (flags[i] && flags[i] != c)
		i++;
	if (i > 7)
		return (0);
	return (1);
}

int	ft_is_charset(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
