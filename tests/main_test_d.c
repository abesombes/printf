/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 00:44:33 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/04 11:44:10 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "limits.h"

int main(void)
{
	printf("UINT_MAX: %d\n", UINT_MAX);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 1  -------------");
	printf("\n------------------------------------");
	printf("\n [%.d] \n", 0);
	ft_printf(" [%.d] ", 0);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 2  -------------");
	printf("\n------------------------------------");
	printf("\n [*%-*.*d*] [*%*.*d*] \n", 4, 5, 10, 10, 21, -10);
	ft_printf(" [*%-*.*d*] [*%*.*d*] ", 4, 5, 10, 10, 21, -10);
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

}
