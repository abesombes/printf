/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_flags_analysis.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:50:32 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/08 17:50:37 by abesombe         ###   ########.fr       */
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

int	ft_is_a_flag_not_conv_s(const char *str, int i, int *j)
{
	if (str[i + *j] && ft_is_flag(str[i + *j]) && \
		!ft_is_charset("cspdiuxXnfge%", str[i + *j]))
		return (1);
	return (0);
}
