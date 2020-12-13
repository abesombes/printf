/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:38:00 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/12 15:04:33 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h> 
# include "libft/libft.h"
# include "elem.h"

int	ft_printf(const char *str, ...);
void ft_putfloat(double n, t_printf *format);
void ft_put_nbr(long long n, t_printf *format, int n_size);
int ft_count_charsize(long long nb);

#endif
