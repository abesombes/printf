/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 09:55:52 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/14 19:19:17 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int d = 21;

	printf("\n\n--------TEST D = 21 POSITIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1: %%d---------");
	printf("\n[%d]", d);
	ft_printf("[%d]", d);
	printf("\n\n--------TEST 2: %%5d---------");
	printf("\n[%5d]", d);
	ft_printf("[%5d]", d);
	printf("\n\n--------TEST 3: %%-5d---------");
	printf("\n[%-5d]", d);
	ft_printf("[%-5d]", d);
	printf("\n\n--------TEST 4: %%05d---------");
	printf("\n[%05d]", d);
	ft_printf("[%05d]", d);
	printf("\n\n--------TEST 5: %%+5d---------");
	printf("\n[%+5d]", d);
	ft_printf("[%+5d]", d);
	printf("\n\n--------TEST 6: %%+05d---------");
	printf("\n[%+05d]", d);
	ft_printf("[%+05d]", d);
	printf("\n\n--------TEST 7: %%+-5d---------");
	printf("\n[%+-5d]", d);
	ft_printf("[%+-5d]", d);
	printf("\n\n--------TEST 8: %%+d---------");
	printf("\n[%+d]", d);
	ft_printf("[%+d]", d);
	printf("\n\n--------TEST 9: %%+*d---------");
	printf("\n[%+*d]", 5, d);
	ft_printf("[%+*d]", 5, d);
	printf("\n\n--------TEST 10: %%+-0*d---------");
	printf("\n[%+-0*d]", 10, d);
	ft_printf("[%+-0*d]", 10, d);
	printf("\n\n--------TEST 11: %%.6d---------");
	printf("\n[%.6d]", d);
	ft_printf("[%.6d]", d);
	printf("\n\n--------TEST 12: %%10.6d---------");
	printf("\n[%10.6d]", d);
	ft_printf("[%10.6d]", d);
	printf("\n\n--------TEST 13: %%-10.6d---------");
	printf("\n[%-10.6d]", d);
	ft_printf("[%-10.6d]", d);
	printf("\n\n--------TEST 14: %%010.6d---------");
	printf("\n[%010.6d]", d);
	ft_printf("[%010.6d]", d);
	printf("\n\n--------TEST 15: %%+10.6d---------");
	printf("\n[%+10.6d]", d);
	ft_printf("[%+10.6d]", d);
	printf("\n\n--------TEST 16: %%+010.6d---------");
	printf("\n[%+010.6d]", d);
	ft_printf("[%+010.6d]", d);
	printf("\n\n--------TEST 17: %%+-10.6d---------");
	printf("\n[%+-10.6d]", d);
	ft_printf("[%+-10.6d]", d);
	printf("\n\n--------TEST 18: %%+.6d---------");
	printf("\n[%+.6d]", d);
	ft_printf("[%+.6d]", d);
	printf("\n\n--------TEST 19: %%+*.6d---------");
	printf("\n[%+*.6d]", 10, d);
	ft_printf("[%+*.6d]", 10, d);
	printf("\n\n--------TEST 20: %%+-0*.6d---------");
	printf("\n[%+-0*.6d]", 10, d);
	ft_printf("[%+-0*.6d]", 10, d);
	printf("\n\n--------TEST 21: %%-06d---------");
	printf("\n[%-06d]", d);
	ft_printf("[%-06d]", d);
	
	d = -21;
	printf("\n\n--------TEST D = -21 NEGATIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1: %%d---------");
	printf("\n[%d]", d);
	ft_printf("[%d]", d);
	printf("\n\n--------TEST 2: %%5d---------");
	printf("\n[%5d]", d);
	ft_printf("[%5d]", d);
	printf("\n\n--------TEST 3: %%-5d---------");
	printf("\n[%-5d]", d);
	ft_printf("[%-5d]", d);
	printf("\n\n--------TEST 4: %%05d---------");
	printf("\n[%05d]", d);
	ft_printf("[%05d]", d);
	printf("\n\n--------TEST 5: %%+5d---------");
	printf("\n[%+5d]", d);
	ft_printf("[%+5d]", d);
	printf("\n\n--------TEST 6: %%+05d---------");
	printf("\n[%+05d]", d);
	ft_printf("[%+05d]", d);
	printf("\n\n--------TEST 7: %%+5d---------");
	printf("\n[%+5d]", d);
	ft_printf("[%+5d]", d);
	printf("\n\n--------TEST 8: %%+d---------");
	printf("\n[%+d]", d);
	ft_printf("[%+d]", d);
	printf("\n\n--------TEST 9: %%-d---------");
	printf("\n[%-d]", d);
	ft_printf("[%-d]", d);
	printf("\n\n--------TEST 10: %%+-05d---------");
	printf("\n[%+-05d]", d);
	ft_printf("[%+-05d]", d);
	printf("\n\n--------TEST 11: %%05.d---------");
	printf("\n[%05.d]", d);
	ft_printf("[%05.d]", d);
	printf("\n\n--------TEST 12: %%.1d---------");
	printf("\n[%.1d]", d);
	ft_printf("[%.1d]", d);
	printf("\n\n--------TEST 13: %%0.1d---------");
	printf("\n[%0.1d]", d);
	ft_printf("[%0.1d]", d);
	printf("\n\n--------TEST 14: %%08.1d---------");
	printf("\n[%08.1d]", d);
	ft_printf("[%08.1d]", d);
	printf("\n\n--------TEST 15: %%+-0*d---------");
	printf("\n[%+-0*d]", 10, d);
	ft_printf("[%+-0*d]", 10, d);
	printf("\n\n--------TEST 16: %%.6d---------");
	printf("\n[%.6d]", d);
	ft_printf("[%.6d]", d);
	printf("\n\n--------TEST 17: %%10.6d---------");
	printf("\n[%10.6d]", d);
	ft_printf("[%10.6d]", d);
	printf("\n\n--------TEST 18: %%-10.6d---------");
	printf("\n[%-10.6d]", d);
	ft_printf("[%-10.6d]", d);
	printf("\n\n--------TEST 19: %%010.6d---------");
	printf("\n[%010.6d]", d);
	ft_printf("[%010.6d]", d);
	printf("\n\n--------TEST 20: %%+10.6d---------");
	printf("\n[%+10.6d]", d);
	ft_printf("[%+10.6d]", d);
	printf("\n\n--------TEST 21: %%+010.6d---------");
	printf("\n[%+010.6d]", d);
	ft_printf("[%+010.6d]", d);
	printf("\n\n--------TEST 22: %%+-10.6d---------");
	printf("\n[%+-10.6d]", d);
	ft_printf("[%+-10.6d]", d);
	printf("\n\n--------TEST 23: %%+.6d---------");
	printf("\n[%+.6d]", d);
	ft_printf("[%+.6d]", d);
	printf("\n\n--------TEST 24: %%+*.6d---------");
	printf("\n[%+*.6d]", 10, d);
	ft_printf("[%+*.6d]", 10, d);
	printf("\n\n--------TEST 25: %%+-0*.6d---------");
	printf("\n[%+-0*.6d]", 10, d);
	ft_printf("[%+-0*.6d]", 10, d);
}
