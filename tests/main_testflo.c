/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testflo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:58:38 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 23:28:58 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>
int main(void)
{
	unsigned long long nb =  18446744073709551615ULL;
	printf("\n------------------------------------");
	printf("\n-------------  TEST 1  -------------");
	printf("\n------------------------------------");
	printf("\n [%10p] \n", (void*)-1);
	ft_printf(" [%10p] ", (void*)-1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 2  -------------");
	printf("\n------------------------------------");
	//printf("\n [%u] \n", ULONG_MAX);
	//ft_printf(" [%u] ", ULONG_MAX);
	printf("\n [%lu] \n", ULONG_MAX);
	ft_printf(" [%lu] ", ULONG_MAX);
	printf("\n [%llu] \n", nb);
	//ft_printf(" [%llu] ", ULONG_MAX);
}
