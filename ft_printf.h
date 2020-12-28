/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:38:00 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/28 15:13:16 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h> 
# include "libft/libft.h"
# include "elem.h"

int ft_parse_format(const char *str, t_printf *format, int i, va_list *va);
int ft_is_charset(char *s, char c);
int ft_is_flag(char c);
int ft_is_conv_spec(char c);
void ft_reset(t_printf *format);
void    ft_zeros_after_dot_exp(double n, long long dec_part, t_printf *f);
int	ft_count_expsize(double n, t_printf *f);
long long ft_float_rounding(long long dec_part, long long int_part, int def_pr, double n);
void    ft_zeros_after_dot(double n, t_printf *f);
void    ft_prefix(double n, t_printf *f);
void    ft_put_exp(double n, t_printf *f, int n_size);
void ft_print_exp(int exp);
void    ft_putexp(double n, t_printf *f);
void ft_put_str(char *s, t_printf *f, int s_size);
void ft_putstrn(char *str, int n);
int ft_count_letters(char *str, t_printf* f);
long long	ft_ten_power(int nb);
long long	ft_max(long long a, long long b);
double ft_abs(double nb);
void    ft_print_char(int n, char c);
int	ft_printf(const char *str, ...);
void	ft_put_float(double n, t_printf *f, int n_size);
void ft_putfloat(double n, t_printf *format);
int	ft_count_floatsize(double n, t_printf *f);
void ft_put_nbr(long long n, t_printf *format, int n_size);
void ft_putnbr_hex(long long i, t_printf *format, int n_size);
int ft_count_charsize(long long nb, t_printf *format);
int ft_count_digits(long long n);
int ft_count_padding_left_zeros(double nb, t_printf *format);
int ft_count_padding_left_spaces(double nb, t_printf *format);
int ft_count_padding_right_spaces(double nb, t_printf *format);
void    ft_print_padding_right(long long n, t_printf *format, int n_size);
void ft_put_nbr_hexa_lc(long long i);
void ft_put_nbr_hexa_uc(long long i);
int ft_count_hexsize(long long nb, t_printf *f);
int ft_count_hex_digits(long long n);
#endif
