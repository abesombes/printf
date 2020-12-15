/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 21:37:50 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/15 01:13:26 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int x = 42;

	printf("\n\n--------TEST X = 42 POSITIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1: %%x---------");
	printf("\n[%x]", x);
	ft_printf("[%x]", x);
	printf("\n\n--------TEST 2: %%5x---------");
	printf("\n[%5x]", x);
	ft_printf("[%5x]", x);
	printf("\n\n--------TEST 3: %%-5x---------");
	printf("\n[%-5x]", x);
	ft_printf("[%-5x]", x);
	printf("\n\n--------TEST 4: %%05x---------");
	printf("\n[%05x]", x);
	ft_printf("[%05x]", x);
	printf("\n\n--------TEST 5: %%+5x---------");
	printf("\n[%+5x]", x);
	ft_printf("[%+5x]", x);
	printf("\n\n--------TEST 6 : %%+05x---------");
	printf("\n[%+05x]", x);
	ft_printf("[%+05x]", x);
	printf("\n\n--------TEST 7: %%+-5x---------");
	printf("\n[%+-5x]", x);
	ft_printf("[%+-5x]", x);
	printf("\n\n--------TEST 8: %%+x---------");
	printf("\n[%+x]", x);
	ft_printf("[%+x]", x);
	printf("\n\n--------TEST 9: %%#+x---------");
	printf("\n[%#+x]", x);
	ft_printf("[%#+x]", x);
	printf("\n\n--------TEST 9 bis: %%#x---------");
	printf("\n[%#x]", x);
	ft_printf("[%#x]", x);
	printf("\n\n--------TEST 10: %%+X---------");
	printf("\n[%+X]", x);
	ft_printf("[%+X]", x);
	printf("\n\n--------TEST 11: %% 6X---------");
	printf("\n[% 6X]", x);
	ft_printf("[% 6X]", x);
	printf("\n\n--------TEST 12: %% #7X---------");
	printf("\n[% #7X]", x);
	ft_printf("[% #7X]", x);
	printf("\n\n--------TEST 12bis: %%#7X---------");
	printf("\n[%#7X]", x);
	ft_printf("[%#7X]", x);
	printf("\n\n--------TEST 12ter: %%#7x---------");
	printf("\n[%#7x]", x);
	ft_printf("[%#7x]", x);
	printf("\n\n--------TEST 13: %% #*x (10)---------");
	printf("\n[% #*X]", 10, x);
	ft_printf("[% #*X]", 10, x);
	printf("\n\n--------TEST 14: %% #010.3X ---------");
	printf("\n[% #010.3X]", x);
	ft_printf("[% #010.3X]", x);
	printf("\n\n--------TEST 14bis: %% #010X ---------");
	printf("\n[% #010X]", x);
	ft_printf("[% #010X]", x);
	printf("\n\n--------TEST 15: %%#08x ---------");
	printf("\n[%#08x]", x);
	ft_printf("[%#08x]", x);
	printf("\n\n--------TEST 16: %% .6X ---------");
	printf("\n[% .6X]", x);
	ft_printf("[% .6X]", x);
	printf("\n\n--------TEST 17: %%.6X ---------");
	printf("\n[%.6X]", x);
	ft_printf("[%.6X]", x);
	printf("\n\n--------TEST 18: X = 0 - %%.6X ---------");
	printf("\n[%.6X]", 0);
	ft_printf("[%.6X]", 0);
}	
