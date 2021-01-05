/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:21:23 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/05 13:52:10 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "limits.h"

int main(void)
{
	printf("\n------------------------------------");
	printf("\n-------------  TEST 1  -------------");
	printf("\n------------------------------------");
	printf("\n  %-3.2u %10.42u \n", 1, -1);
	ft_printf("  %-3.2u %10.42u ", 1, -1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 2  -------------");
	printf("\n------------------------------------");
	printf("\n 0*[%-0*.10u]*0 0*[%-0*.0u]*0 \n", 21, 1021, 21, -1011);
	ft_printf(" 0*[%-0*.10u]*0 0*[%-0*.0u]*0 ", 21, 1021, 21, -1011);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 3  -------------");
	printf("\n------------------------------------");
	printf("\n [%09.0d] \n", UINT_MAX + 1);
	ft_printf(" [%09.0d] ", UINT_MAX + 1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 4  -------------");
	printf("\n------------------------------------");	
	printf("\n [%010.0d] \n", UINT_MAX + 1);
	ft_printf(" [%010.0d] ", UINT_MAX + 1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 5  -------------");
	printf("\n------------------------------------");
	printf("\n [%011.0d]\n", UINT_MAX + 1);
	ft_printf(" [%011.0d]", UINT_MAX + 1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 6  -------------");
	printf("\n------------------------------------");
	printf("\n [%011.0d] \n", UINT_MAX);
	ft_printf(" [%011.0d] ", UINT_MAX);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 7  -------------");
	printf("\n------------------------------------");
	printf("\n --0*%0*.0d*0 0*%0*.10d*0-- \n", -2, 0, 21, 1);
	ft_printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -2, 0, 21, 1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 8  -------------");
	printf("\n------------------------------------");
	printf("\n [%*.5s][%*.5s]\n", -10, "123", 10, "4567");
	ft_printf(" [%*.5s][%*.5s]", -10, "123", 10, "4567");
	printf("\n------------------------------------");
	printf("\n-------------  TEST 9  -------------");
	printf("\n------------------------------------");
	printf("\n 0*%0-*.*d*0 0*%0*.*d*0 \n", 2, 6, 102, 21, 10, -101);
	ft_printf(" 0*%0-*.*d*0 0*%0*.*d*0 ", 2, 6, 102, 21, 10, -101);

}
