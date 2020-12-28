/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testp_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 21:37:50 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/20 00:27:48 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int p = 42;
	void *x;

	x = &p;
	printf("\n\n-------- TEST X = PTR ON 42 ---------"); 
	printf("\n\n-------- TEST 1: %%p---------");
	printf("\nreal:[%p]\n", x);
	ft_printf("mine:[%p]", x);
	printf("\n\n-------- TEST 2: %%25p---------");
	printf("\nreal:[%25p]\n", x);
	ft_printf("mine:[%25p]", x);
	printf("\n\n-------- TEST 3: %%-25p---------");
	printf("\nreal:[%-25p]\n", x);
	ft_printf("mine:[%-25p]", x);
	printf("\n\n-------- TEST 4: %%025p---------");
	printf("\nreal:[%025p]\n", x);
	ft_printf("mine:[%025p]", x);
	printf("\n\n-------- TEST 5: %%+25p---------");
	printf("\nreal:[%+25p]\n", x);
	ft_printf("mine:[%+25p]", x);
	printf("\n\n-------- TEST 6 : %%+025p---------");
	printf("\nreal:[%+025p]\n", x);
	ft_printf("mine:[%+025p]", x);
	printf("\n\n-------- TEST 7: %%+-25p---------");
	printf("\nreal:[%+-25p]\n", x);
	ft_printf("mine:[%+-25p]", x);
	printf("\n\n-------- TEST 8: %%+p---------");
	printf("\nreal:[%+p]\n", x);
	ft_printf("mine:[%+p]", x);
	printf("\n\n-------- TEST 9: %%#+p---------");
	printf("\nreal:[%#+p]\n", x);
	ft_printf("mine:[%#+p]", x);
	printf("\n\n-------- TEST 9 bis: %%#p---------");
	printf("\nreal:[%#p]\n", x);
	ft_printf("mine:[%#p]", x);
	printf("\n\n-------- TEST 10: %%+p---------");
	printf("\nreal:[%+p]\n", x);
	ft_printf("mine:[%+p]", x);
	printf("\n\n-------- TEST 11: %% 26p---------");
	printf("\nreal:[% 26p]\n", x);
	ft_printf("mine:[% 26p]", x);
	printf("\n\n-------- TEST 12: %% #27p---------");
	printf("\nreal:[% #27p]\n", x);
	ft_printf("mine:[% #27p]", x);
	printf("\n\n-------- TEST 12bis: %%#27p---------");
	printf("\nreal:[%#27p]\n", x);
	ft_printf("mine:[%#27p]", x);
	printf("\n\n-------- TEST 12ter: %%#27p---------");
	printf("\nreal:[%#27p]\n", x);
	ft_printf("mine:[%#27p]", x);
	printf("\n\n-------- TEST 13: %% #*p (30)---------");
	printf("\nreal:[% #*p]\n", 30, x);
	ft_printf("mine:[% #*p]", 30, x);
	printf("\n\n-------- TEST 14: %% #030.18p ---------");
	printf("\nreal:[% #030.18p]\n", x);
	ft_printf("mine:[% #030.18p]", x);
	printf("\n\n-------- TEST 14bis: %% #030p ---------");
	printf("\nreal:[% #030p]\n", x);
	ft_printf("mine:[% #030p]", x);
	printf("\n\n-------- TEST 14ter: %% #30p ---------");
	printf("\nreal:[% #30p]\n", x);
	ft_printf("mine:[% #30p]", x);
	printf("\n\n-------- TEST 15: %%#028p ---------");
	printf("\nreal:[%#028p]\n", x);
	ft_printf("mine:[%#028p]", x);
	printf("\n\n-------- TEST 16: %% .16p ---------");
	printf("\nreal:[% .16p]\n", x);
	ft_printf("mine:[% .16p]", x);
	printf("\n\n-------- TEST 17: %%.16p ---------");
	printf("\nreal:[%.16p]\n", x);
	ft_printf("mine:[%.16p]", x);
	printf("\n\n-------- TEST 18: p = 0 - %%.6p ---------");
	printf("\nreal:[%.6p]\n", 0);
	ft_printf("mine:[%.6p]", 0);
}	
