/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:35:41 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/09 11:06:51 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_is_valid_conv_spec(char c)
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

int	ft_printf(const char *str, ...)
{
	va_list va;
	int i;
	int j;
	int nb_var;
	char c;
	void *p;
	t_printf *format;
	int k;
	
	va_start (va, str);
	nb_var = 0;
	i = 0;
	while (str[i] && str[i + 1])
	{
		j = 1;
	 	while (str[i] != '%')
			ft_putchar(str[i++]);
		if (str[i] == '%' && str[i + 1] != '%')
		{
			ft_parse_format(str, format, i, va);
			while (str[i + j] && ft_is_valid_conv_spec(str[i + j]) != 1)
				j++;
			nb_var++;
			if (str[i + j] && ft_is_valid_conv_spec(str[i + j]) == 1)
			{
				if (str[i + j] == 'c')
				{
					c = va_arg (va, int);
					ft_putchar(c);
				}
				else if (str[i + j] == 'p')
					p = va_arg(va, void*);
				else if (str[i + j] == 'd' || str[i + j] == 'i')
				{
					k = va_arg(va, int);					 	
					ft_putnbr(k);
				}
			}
		}
		else if (str[i] == '%' && str[i + 1] == '%')
			ft_putchar('%');
		i = i + j + 1;	
	}
	va_end (va);
	return (nb_var);
}

int	ft_parse_format(char *str, t_printf *format, int i, va_list *va)
{
	

}

int main(void)
{
	ft_printf("test POURCENTAGE: %%\nvaleur de la 1ere variable: %i\nvaleur de la 2eme variable: %d\nvaleur de la 3eme variable: %\nc", 4, 8, 'z');
	ft_printf("your name: %-10s, age: %05d, height: %0+10.3fm", "Foo bar", 21, 1.8);
}
