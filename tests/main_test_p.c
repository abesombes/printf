/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:00:02 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/03 21:05:14 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "limits.h"

int main(void)
{
	printf("\n------------------------------------");
	printf("\n-------------  TEST 1  -------------");
	printf("\n------------------------------------");
	printf("\n [%p] [%p] \n", (void *)LONG_MIN, (void *)LONG_MAX);
	ft_printf(" [%p] [%p] ", (void *)LONG_MIN, (void *)LONG_MAX);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 2  -------------");
	printf("\n------------------------------------");
	printf("\n [%p] [%p] \n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	ft_printf(" [%p] [%p] ", (void *)ULONG_MAX, (void *)-ULONG_MAX);
}
