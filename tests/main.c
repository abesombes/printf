/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:10:48 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/02 00:39:52 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	int totalmyptf;
	int totalrealptf;
	int nb;
	float fl;
	double fl2;
	float fl3;
	int *ptr;
	int precision;

	fl = 12.46;
	fl2 = 16.789123456;
	fl3 = 54684153.4566845311;
	nb = 12;
	precision = 4;
	ptr = &nb;
	totalrealptf=printf("test multi flags %%p: [%10p] - nb = [% 18d] - fl = [%24.15f]\n", ptr, nb, fl);
	totalmyptf=ft_printf("test multi flags %%p: [%10p] - nb = [% 18d] - fl = [%24.15f]\n", ptr, nb, fl);
printf("test flag %%8.4f sur [23.45]: f1 = [%8.4f]\ntest flag %%10.2e sur [3141.5926]: f2 = [%10.2e]\ntest flag %%#08x sur [0x1db]: x = [%#08x]\ntest flag %%d: i = [%d]\n", 23.45, 3141.5926, 0x1db, -1 );
    ft_printf("test flag %%8.4f sur [23.45]: f1 = [%8.4f]\ntest flag %%10.2e sur [3141.5926]: f2 = [%10.2e]\ntest flag %%#08x sur [0x1db]: x = [%#08x]\ntest flag %%d: i = [%d]\n", 23.45, 3141.5926, 0x1db, -1 );
	printf("test flag %%f: [%f]\n", fl);
	ft_printf("test flag %%f: [%f]\n", fl);
	printf("test flag %%p: [%p]\n", ptr);
	ft_printf("test flag %%p: [%p]\n", ptr);
	printf("test flag %%d: [%d]\n", nb);
	ft_printf("test flag %%d: [%d]\n", nb);
	printf("test flag %%+d: [%+d]\n", nb);
	ft_printf("test flag %%+d: [%+d]\n", nb);
	printf("test flag %%5d: [%5d]\n", nb);
	ft_printf("test flag %%5d: [%5d]\n", nb);
	printf("test flag %%-5d: [%-5d]\n", nb);
	printf("test flag %%01d: [%01d]\n", nb);
	printf("test flag %%02d: [%02d]\n", nb);
	printf("test flag %%03d: [%03d]\n", nb);
	printf("test flag %%04d: [%04d]\n", nb);
	printf("test flag %%05d: [%05d]\n", nb);
	printf("test flag %%06d: [%06d]\n", nb);
	printf("test flag %%#010x: [%#010x]\n", nb);
	printf("test flag %%010d: [%010d]\n", nb);
	printf("test flag %% 010d: [% 010d]\n", nb);
	printf("test flag %%  010d: [%  010d]\n", nb);
	printf("test flag %%*d: [%*d]\n", precision, nb);
	printf("test flat %%.*s : [%.*s] - initial string = [%s]", 3, "abcdef", "abcdef");
//printf("REALPTF: %i vs TOTALPTF: %i", totalrealptf, totalmyptf);
}
