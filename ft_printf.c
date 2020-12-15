/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:35:41 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/15 01:10:05 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_is_conv_spec(char c);
int ft_is_flag(char c);
int ft_is_charset(char *s, char c);
int	ft_printf(const char *str, ...);
int	ft_parse_format(const char *str, t_printf *format, int i, va_list *va);
void ft_reset(t_printf *format);

int ft_is_conv_spec(char c)
{
	char *conv_spec;
	int i;

	i = 0;
	conv_spec = "cspdiuxXnfge";
	while (conv_spec[i] != c)
		i++;
	if (i > 11)
		return (0);
	return (1);
}

int ft_is_flag(char c)
{
	char *flags;
	int i;

	i = 0;
	flags = "*0+ -#";
	while (flags[i] != c)
		i++;
	if (i > 5)
		return (0);
	return (1);
}

int ft_is_charset(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list va;
	int i;
	int j;
	int nb_var;
	unsigned char c;
	void *p;
	t_printf *format;
	int k;
	double f;

	va_start (va, str);
	nb_var = 0;
	i = 0;
	if (!(format = (t_printf *)malloc(sizeof(t_printf))))
		return (-1);
	while (str[i] && str[i + 1])
	{
		j = 1;
		while (str[i] != '%')
			ft_putchar(str[i++]);
		if (str[i] == '%' && str[i + 1] != '%')
		{
			ft_parse_format(str, format, i, &va);
			while (str[i + j] && ft_is_conv_spec(str[i + j]) != 1)
				j++;
			nb_var++;
			if (format->width == 0)
				format->width = va_arg(va, int);
			if (str[i + j] && ft_is_conv_spec(str[i + j]) == 1)
			{	
				if (str[i + j] == 'c')
					ft_putchar(c = va_arg (va, int));
				else if (ft_is_charset("feg", str[i + j]))
					ft_putfloat(f = va_arg(va, double), format);
				else if (str[i + j] == 'p')
					ft_putnbr_hex((long long)(p = va_arg(va, void*)), format);
				else if (str[i + j] == 's')
					ft_putstr(p = va_arg(va, char *));
				else if (ft_is_charset("udixX", str[i + j]))
				{
					if (str[i + j] == '*')
						format->width = va_arg(va, int);
					k = va_arg(va, long long);
					if (ft_is_charset("xX", str[i + j]))
						ft_putnbr_hex((unsigned int)k, format);
					else
						ft_put_nbr((int)k, format, ft_count_charsize(k));
				}
			}
		}
		else if (str[i] == '%' && str[i + 1] == '%')
			ft_putchar('%');
		i = i + j + 1;	
	}
	ft_putchar(str[i]);
	va_end (va);
	return (nb_var);
}

void ft_reset(t_printf *format)
{
	format->start = NULL;
	format->conv_spec = 0;
	format->data = NULL;
	format->width = -1;
	format->precision = -1;
	format->minus = 0;
	format->plus = 0;
	format->space = 0;
	format->alternate = 0;
	format->zero = 0;
	format->dot = 0;
}

int	ft_parse_format(const char *str, t_printf *format, int i, va_list *va)
{
	int j;
	
	j = 1;	
	ft_reset(format);
	while (ft_is_flag(str[i + j]) && ft_is_charset("cspdiuxXnfge", str[i + j]) == 0)
	{	
		if (str[i + j] == '-')
			format->minus = 1;
		else if (str[i + j] == '+')
			format->plus = 1;
		else if (str[i + j] == '0')
			format->zero = 1;
		else if (str[i + j] == ' ')
			format->space = 1;
		else if (str[i + j] == '#')
			format->alternate = 1;
		else if (str[i + j] == '*')
			format->width = 0;
		j++;
	}
	if (str[i + j] >= '0' && str[i + j] <= '9')
	   format->width = 0;	
	while (str[i + j] >= '0' && str[i + j] <= '9')
		format->width = format->width * 10 + str[i + j++] - 48;
	if (str[i + j] == '.')
	{
		j++;
		format->precision = 0;
		while (str[i + j] >= '0' && str[i + j] <= '9')
			format->precision = format->precision * 10 + str[i + j++] - 48;
	}
	format->conv_spec = str[i + j];
//	printf("\n###### FLAGS DETECTION ######\n");
//	printf("start: [%s]\n", format->start);
//	printf("conv_spec: [%c]\n", format->conv_spec);
//	printf("width: [%i]\n", format->width);
//	printf("precision: [%i]\n", format->precision);
//	printf("minus: [%i]\n", format->minus);
//	printf("plus: [%i]\n", format->plus);
//	printf("space: [%i]\n", format->space);
//	printf("zero: [%i]\n", format->zero);
//	printf("alternate: [%i]\n", format->alternate);
	return(1);
}

//int main(void)
//{
	//	ft_printf("test POURCENTAGE: %%\nvaleur de la 1ere variable: %i\nvaleur de la 2eme variable: %d\nvaleur de la 3eme variable: %c\n", 4, 8, 'z');
	//printf("your name: %%-10s, age: %%05d, height: %%0+10.3fm");
	//printf("\nyour name: %-s", "Alexandre");
	//printf("FLOAT NUMBER TEST 14.123456: %f", 14.12345650000); 
	//ft_printf("your name: %-10s, age: %05d, height: %0+10.3fm", "Foo bar", 21, 1.84556449);
	//printf("your name: %-10s, age: %05d, height: %fm", "Foo bar", 21, 1.84556449);
//	ft_printf("your name: %-10s, age: %05d, height: %0+10.4fm", "Foo bar", 21, 1.8455645);
	//printf("%%05.1d");
//	ft_printf("[%05d]", -21);
//	printf(" vs [%05d]", -21);
//	ft_printf("[%-5d]", 21);
//	printf(" vs [%-5d]", 21);
//	printf("[%.1d]", -21);
//	printf("[%0.1d]", -21);
//	printf("[%04.1d]", -21);
//	printf("[%08.1d]", -21);
	//printf("\n[%05.d]", -21);
	//printf("\n[%05d]", -21);
	//printf("\n[%5d]", -21);
	//printf("\n[% 5d]", -21);
	//printf("%08x\n", 1024);
	//printf("your name: %-10s, age: %05d, height: %fm", "Foo bar", 21, 1.8455645);
//}
