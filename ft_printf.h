/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:38:00 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/05 19:05:02 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "elem.h"

int			ft_count_ptr_pad_lzeros(double nb, t_printf *f);
int			ft_count_ptr_pad_lspaces(double nb, t_printf *f);
int			ft_count_ptr_pad_rspaces(double nb, t_printf *format);
void		ft_print_0x(t_printf *f);
void		ft_put_ptr_nbr_hexa_lc(unsigned long long i, t_printf *f);
int			ft_count_ptr_hexsize(unsigned long long nb, t_printf *f);
int			ft_count_ptr_hex_digits(unsigned long long n);
void		ft_print_ptr_hexnbr_block(unsigned long long n, t_printf *f, int n_size);
void		ft_putptr_hex(unsigned long long n, t_printf *f, int n_size);
void		ft_putc(unsigned char c, t_printf *f);
int			ft_strlen(const char *s);
void    	ft_putnbr_f(long long n, t_printf *f);
void		ft_putchar_f(unsigned char c, t_printf *f);
void		ft_putstr_f(char *str, t_printf *f);
long long	ft_exp_rounding(long long dec_part);
void		ft_print_int_dec(double n, double nb, int def_pr, t_printf *f);
void		ft_calc_exp(double *nb, int *exp);
int			ft_count_dec_size(long long *dec_part);
void		ft_print_if_not_percentage(const char *str, int *i, t_printf *f);
void		ft_launch_udix(char conv_spec, t_printf *format, va_list *va);
int			ft_parse_format(const char *str, t_printf *format, int i, int *j);
int			ft_is_charset(char *s, char c);
int			ft_is_flag(char c);
int			ft_is_conv_spec(char c);
void		ft_reset(t_printf *format);
void		ft_zeros_after_dot_exp(double n, long long dec_part, t_printf *f);
int			ft_count_expsize(double n, t_printf *f);
long long	ft_float_rounding(long long dec_part, long long int_part, \
			int def_pr, double n);
void		ft_zeros_after_dot(double n, t_printf *f);
void		ft_prefix(double n, t_printf *f);
void		ft_put_exp_before_after(double n, t_printf *f, int n_size);
void		ft_print_exp(int exp, t_printf *f);
void		ft_putexp(double n, t_printf *f);
void		ft_put_str(char *s, t_printf *f, int s_size);
void		ft_putstrn(char *str, int n, t_printf *f);
int			ft_count_letters(char *str, t_printf *f);
long long	ft_ten_power(int nb);
long long	ft_max(long long a, long long b);
double		ft_abs(double nb);
void		ft_print_char(int n, char c, t_printf *f);
int			ft_printf(const char *str, ...);
void		ft_put_float(double n, t_printf *f, int n_size);
void		ft_putfloat(double n, t_printf *format);
int			ft_count_floatsize(double n, t_printf *f);
void		ft_put_nbr(long long n, t_printf *format, int n_size);
void		ft_putnbr_hex(long long i, t_printf *format, int n_size);
void		ft_print_hexnbr_block(long long n, t_printf *format, int n_size);
int			ft_count_charsize(long long nb, t_printf *format);
int			ft_count_digits(long long n, t_printf *format);
int			ft_count_pad_lzeros(double nb, t_printf *format);
int			ft_count_pad_lspaces(double nb, t_printf *format);
int			ft_count_pad_rspaces(double nb, t_printf *format);
void		ft_print_pad_right(t_printf *format, int n_size);
void		ft_put_nbr_hexa_lc(long long i, t_printf *f);
void		ft_put_nbr_hexa_uc(long long i, t_printf *f);
int			ft_count_hexsize(long long nb, t_printf *f);
int			ft_count_hex_digits(long long n, t_printf *f);
void		ft_print_nbr_block(long long n, t_printf *f, int n_size);
void		ft_print_pad_left(long long n, t_printf *format, int n_size);
void		ft_print_hexa_uc_or_lc(long long n, t_printf *f);
void		ft_parse_stars(const char *str, t_printf *format, va_list *va);

#endif
