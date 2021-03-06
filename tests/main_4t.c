/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_4t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:12:36 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/07 15:40:18 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int main(void)
{
	printf("\n------------------------------------");
	printf("\n-------------  TEST 1  -------------");
	printf("\n------------------------------------");
	printf("\n [% #076d] \n", 1509658266);
	ft_printf("\n [% #076d] \n", 1509658266);
	printf("\n------------------------------------");
	printf("\n-----------  TEST 1 bis  -----------");
	printf("\n------------------------------------");
	printf("\n [% #076.30d] \n", 1509658266);
	ft_printf("\n [% #076.30d] \n", 1509658266);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 2  -------------");
	printf("\n------------------------------------");
	printf("\n [% +033.d] \n", 1135048762);
	ft_printf(" [% +033.d] ", 1135048762);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 3  -------------");
	printf("\n------------------------------------");
	printf("\n [% 03d] \n", -1);
	ft_printf(" [% 03d] ", -1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 4  -------------");
	printf("\n------------------------------------");
	printf("\n [% 5d] \n", -1);
	ft_printf(" [% 5d] ", -1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 5  -------------");
	printf("\n------------------------------------");
	printf("\n [%+03d] \n", -1);
	ft_printf(" [%+03d] ", -1);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 6  -------------");
	printf("\n------------------------------------");
	printf("\n [% 05c] \n", 0);
	ft_printf(" [% 05c] ", 0);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 7  -------------");
	printf("\n------------------------------------");
	printf("\n [%#x] \n", 0);
	ft_printf(" [%#x] ", 0);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 8  -------------");
	printf("\n------------------------------------");
	printf("\n [%#-+010x] \n", 0);
	ft_printf(" [%#-+010x] ", 0);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 9  -------------");
	printf("\n------------------------------------");
	printf("\n [%5.5X] \n", 0);
	ft_printf(" [%5.5X] ", 0);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 10  ------------");
	printf("\n------------------------------------");
	printf("\n [% +5.X] \n", 588);
	ft_printf(" [% +5.X] ", 588);
	printf("\n------------------------------------");
	printf("\n-------------  TEST 11  ------------");
	printf("\n------------------------------------");
	printf("\n [% +#45x] \n", 5881654515);
	ft_printf(" [% +#45x] ", 5881654515);
}
