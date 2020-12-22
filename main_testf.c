/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 09:55:52 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/20 20:09:33 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	double f = 2142.0123456789;

	printf("\n\n--------TEST f = 2142.0123456789 POSITIVE NUMBER ---------");
	printf("\n\n--------TEST 1: [%%f]---------");
	printf("\n[%f]\n", f);
	ft_printf("[%f]", f);
	printf("\n\n--------TEST 2: [%%15f]---------");
	printf("\n[%15f]\n", f);
	ft_printf("[%15f]", f);
	printf("\n\n--------TEST 3: [%%-15f]---------");
	printf("\n[%-15f]\n", f);
	ft_printf("[%-15f]", f);
	printf("\n\n--------TEST 4: [%%015f]---------");
	printf("\n[%015f]\n", f);
	ft_printf("[%015f]", f);
	printf("\n\n--------TEST 5: [%%+15f]---------");
	printf("\n[%+15f]\n", f);
	ft_printf("[%+15f]", f);
	printf("\n\n--------TEST 6: [%%+015f]---------");
	printf("\n[%+015f]\n", f);
	ft_printf("[%+015f]", f);
	printf("\n\n--------TEST 7: [%%+-15f]---------");
	printf("\n[%+-15f]\n", f);
	ft_printf("[%+-15f]", f);
	printf("\n\n--------TEST 8: [%%+f]---------");
	printf("\n[%+f]\n", f);
	ft_printf("[%+f]", f);
/*	printf("\n\n--------TEST 9: [%% 0f]---------");
	printf("\n[% 0f]\n", f);
	ft_printf("[% 0f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.3f]---------");
	printf("\n[% 0.3f]\n", f);
	ft_printf("[% 0.3f]", f);
	printf("\n\n--------TEST 10: [%% 020.12f]---------");
	printf("\n[% 020.12f]\n", f);
	ft_printf("[% 020.12f]", f);*/
//	printf("\n\n--------TEST 11: [%%#020.10f]---------");
//	printf("\n[%#020.10f]\n", f);
//	ft_printf("[%#020.10f]", f);
//	printf("\n\n--------TEST 12: [%%+-020.10f]---------");
//	printf("\n[%#020.10f]\n", f);
//	ft_printf("[%#020.10f]", f);

	f = -2142.0123456789;
	printf("\n\n--------TEST f = -21.0123456789 NEGATIVE NUMBER ---------");
	printf("\n\n--------TEST 1---------");
	printf("\n[%f]\n", f);
	ft_printf("[%f]", f);
	printf("\n\n--------TEST 2---------");
	printf("\n[%5f]\n", f);
	ft_printf("[%5f]", f);
	printf("\n\n--------TEST 3---------");
	printf("\n[%-5f]\n", f);
	ft_printf("[%-5f]", f);
	printf("\n\n--------TEST 4---------");
	printf("\n[%05f]\n", f);
	ft_printf("[%05f]", f);
	printf("\n\n--------TEST 5---------");
	printf("\n[%+5f]\n", f);
	ft_printf("[%+5f]", f);
	printf("\n\n--------TEST 6---------");
	printf("\n[%+05f]\n", f);
	ft_printf("[%+05f]", f);
	printf("\n\n--------TEST 7---------");
	printf("\n[%+5f]\n", f);
	ft_printf("[%+5f]", f);
	printf("\n\n--------TEST 8---------");
	printf("\n[%+f]\n", f);
	ft_printf("[%+f]", f);
	printf("\n\n--------TEST 9---------");
	printf("\n[%-f]\n", f);
	ft_printf("[%-f]", f);
	printf("\n\n--------TEST 10---------");
	printf("\n[%+-05f]\n", f);
	ft_printf("[%+-05f]", f);
	printf("\n\n--------TEST 11---------");
	printf("\n[%05.f]\n", f);
	ft_printf("[%05.f]", f);
	printf("\n\n--------TEST 12---------");
	printf("\n[%.1f]\n", f);
	ft_printf("[%.1f]", f);
	printf("\n\n--------TEST 13---------");
	printf("\n[%0.1f]\n", f);
	ft_printf("[%0.1f]", f);
	printf("\n\n--------TEST 14---------");
	printf("\n[%08.1f]\n", f);
	ft_printf("[%08.1f]", f);
}
