/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:38:00 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/22 19:18:07 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h> 
# include "libft/libft.h"
# include "elem.h"

void ft_put_str(char *s, t_printf *f, int s_size);
void ft_putstrn(char *str, int n);
int ft_count_letters(char *str, t_printf* f);
long long ft_ten_power(int nb);
int	ft_max(int a, int b);
void    ft_print_char(int n, char c);
int	ft_printf(const char *str, ...);
void	ft_put_float(double n, t_printf *f, int n_size);
void ft_putfloat(double n, t_printf *format);
int	ft_count_floatsize(double n, t_printf *f);
void ft_put_nbr(long long n, t_printf *format, int n_size);
void ft_putnbr_hex(long long i, t_printf *format, int n_size);
int ft_count_charsize(long long nb, t_printf *format);
int ft_count_digits(long long n);
int ft_count_padding_left_zeros(long long nb, t_printf *format);
int ft_count_padding_left_spaces(long long nb, t_printf *format);
int ft_count_padding_right_spaces(long long nb, t_printf *format);
void    ft_print_padding_right(long long n, t_printf *format, int n_size);
int ft_is_charset(char *s, char c);
void ft_put_nbr_hexa_lc(long long i);
void ft_put_nbr_hexa_uc(long long i);
int ft_count_hexsize(long long nb, t_printf *f);
int ft_count_hex_digits(long long n);
#endif
