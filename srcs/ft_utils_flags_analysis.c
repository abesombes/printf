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

int	ft_is_conv_s(char c)
{
	char	*conv_s;
	int		i;

	i = 0;
	conv_s = "cspdiuxXnfge%";
	while (conv_s[i] && conv_s[i] != c)
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
