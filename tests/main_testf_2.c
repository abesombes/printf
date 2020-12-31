/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testf_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 09:55:52 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/30 23:54:12 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	double f = 2142.000123456789;

	printf("\n\n--------TEST f = 2142.000123456789 POSITIVE NUMBER ---------");
	printf("\n\n--------TEST 1: [%%f]---------");
	printf("\n[%f]\n", f);
	ft_printf("[%f]", f);
	printf("\n\n--------TEST 3: [%%-15f]---------");
	printf("\n[%-15f]\n", f);
	ft_printf("[%-15f]\0\0", f);
	printf("\n\n--------TEST 2: [%%15f]---------");
	printf("\n[%15f]\n", f);
	ft_printf("[%15f]", f);
/*	printf("\n\n--------TEST 3: [%%-15f]---------");
	printf("\n[%-15f]\n", f);
	ft_printf("[%-15f]", f);*/
}
