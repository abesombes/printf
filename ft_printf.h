/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:38:00 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/13 23:22:38 by abesombe         ###   ########.fr       */
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
void ft_putnbr_hex(long long i, t_printf *format);
int ft_count_charsize(long long nb);
void	ft_print_after(int length, char c);
void	ft_print_formating_before(long long n, t_printf *format, int n_size);
int ft_is_charset(char *s, char c);
#endif
