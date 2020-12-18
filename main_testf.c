/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 09:55:52 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/12 11:01:38 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int d = 21;

	printf("\n\n--------TEST D = 21 POSITIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1---------");
	printf("\n[%d]", d);
	ft_printf("[%d]", d);
	printf("\n\n--------TEST 2---------");
	printf("\n[%5d]", d);
	ft_printf("[%5d]", d);
	printf("\n\n--------TEST 3---------");
	printf("\n[%-5d]", d);
	ft_printf("[%-5d]", d);
	printf("\n\n--------TEST 4---------");
	printf("\n[%05d]", d);
	ft_printf("[%05d]", d);
	printf("\n\n--------TEST 5---------");
	printf("\n[%+5d]", d);
	ft_printf("[%+5d]", d);
	printf("\n\n--------TEST 6---------");
	printf("\n[%+05d]", d);
	ft_printf("[%+05d]", d);
	printf("\n\n--------TEST 7---------");
	printf("\n[%+-5d]", d);
	ft_printf("[%+-5d]", d);
	printf("\n\n--------TEST 8---------");
	printf("\n[%+d]", d);
	ft_printf("[%+d]", d);
	
	d = -21;
	printf("\n\n--------TEST D = -21 NEGATIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1---------");
	printf("\n[%d]", d);
	ft_printf("[%d]", d);
	printf("\n\n--------TEST 2---------");
	printf("\n[%5d]", d);
	ft_printf("[%5d]", d);
	printf("\n\n--------TEST 3---------");
	printf("\n[%-5d]", d);
	ft_printf("[%-5d]", d);
	printf("\n\n--------TEST 4---------");
	printf("\n[%05d]", d);
	ft_printf("[%05d]", d);
	printf("\n\n--------TEST 5---------");
	printf("\n[%+5d]", d);
	ft_printf("[%+5d]", d);
	printf("\n\n--------TEST 6---------");
	printf("\n[%+05d]", d);
	ft_printf("[%+05d]", d);
	printf("\n\n--------TEST 7---------");
	printf("\n[%+5d]", d);
	ft_printf("[%+5d]", d);
	printf("\n\n--------TEST 8---------");
	printf("\n[%+d]", d);
	ft_printf("[%+d]", d);
	printf("\n\n--------TEST 9---------");
	printf("\n[%-d]", d);
	ft_printf("[%-d]", d);
	printf("\n\n--------TEST 10---------");
	printf("\n[%+-05d]", d);
	ft_printf("[%+-05d]", d);
	printf("\n\n--------TEST 11---------");
	printf("\n[%05.d]", d);
	ft_printf("[%05.d]", d);
	printf("\n\n--------TEST 12---------");
	printf("\n[%.1d]", d);
	ft_printf("[%.1d]", d);
	printf("\n\n--------TEST 13---------");
	printf("\n[%0.1d]", d);
	ft_printf("[%0.1d]", d);
	printf("\n\n--------TEST 14---------");
	printf("\n[%08.1d]", d);
	ft_printf("[%08.1d]", d);
}
