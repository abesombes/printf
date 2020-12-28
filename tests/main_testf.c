/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 09:55:52 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/27 15:15:44 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	double f = 2142.000123456789;

	printf("\n\n--------TEST f = 2142.000123456789 POSITIVE NUMBER ---------");
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
	printf("\n\n--------TEST 9: [%% 0f]---------");
	printf("\n[% 0f]\n", f);
	ft_printf("[% 0f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.f]---------");
	printf("\n[% 0.f]\n", f);
	ft_printf("[% 0.f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.1f]---------");
	printf("\n[% 0.1f]\n", f);
	ft_printf("[% 0.1f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.2f]---------");
	printf("\n[% 0.2f]\n", f);
	ft_printf("[% 0.2f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.3f]---------");
	printf("\n[% 0.3f]\n", f);
	ft_printf("[% 0.3f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.4f]---------");
	printf("\n[% 0.4f]\n", f);
	ft_printf("[% 0.4f]", f);
	printf("\n\n--------TEST 10: [%% 020.12f]---------");
	printf("\n[% 020.12f]\n", f);
	ft_printf("[% 020.12f]", f);
	printf("\n\n--------TEST 11: [%%#020.11f]---------");
	printf("\n[%#020.11f]\n", f);
	ft_printf("[%#020.11f]", f);
	printf("\n\n--------TEST 12: [%%+-020.10f]---------");
	printf("\n[%#020.10f]\n", f);
	ft_printf("[%#020.10f]", f);
	
	f = 21420001234.56789;

	printf("\n\n--------TEST f = 21420001234.56789 POSITIVE NUMBER ---------");
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
	printf("\n\n--------TEST 9: [%% 0f]---------");
	printf("\n[% 0f]\n", f);
	ft_printf("[% 0f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.f]---------");
	printf("\n[% 0.f]\n", f);
	ft_printf("[% 0.f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.1f]---------");
	printf("\n[% 0.1f]\n", f);
	ft_printf("[% 0.1f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.2f]---------");
	printf("\n[% 0.2f]\n", f);
	ft_printf("[% 0.2f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.3f]---------");
	printf("\n[% 0.3f]\n", f);
	ft_printf("[% 0.3f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.4f]---------");
	printf("\n[% 0.4f]\n", f);
	ft_printf("[% 0.4f]", f);
	printf("\n\n--------TEST 10: [%% 020.12f]---------");
	printf("\n[% 020.12f]\n", f);
	ft_printf("[% 020.12f]", f);
	printf("\n\n--------TEST 11: [%%#020.11f]---------");
	printf("\n[%#020.11f]\n", f);
	ft_printf("[%#020.11f]", f);
	printf("\n\n--------TEST 12: [%%+-020.10f]---------");
	printf("\n[%#020.10f]\n", f);
	ft_printf("[%#020.10f]", f);

	f = 9876543210.123456789;

	printf("\n\n--------TEST f = 9876543210.123456789 POSITIVE NUMBER ---------");
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
	printf("\n\n--------TEST 9: [%% 0f]---------");
	printf("\n[% 0f]\n", f);
	ft_printf("[% 0f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.f]---------");
	printf("\n[% 0.f]\n", f);
	ft_printf("[% 0.f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.1f]---------");
	printf("\n[% 0.1f]\n", f);
	ft_printf("[% 0.1f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.2f]---------");
	printf("\n[% 0.2f]\n", f);
	ft_printf("[% 0.2f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.3f]---------");
	printf("\n[% 0.3f]\n", f);
	ft_printf("[% 0.3f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.4f]---------");
	printf("\n[% 0.4f]\n", f);
	ft_printf("[% 0.4f]", f);
	printf("\n\n--------TEST 10: [%% 020.12f]---------");
	printf("\n[% 020.12f]\n", f);
	ft_printf("[% 020.12f]", f);
	printf("\n\n--------TEST 11: [%%#020.11f]---------");
	printf("\n[%#020.11f]\n", f);
	ft_printf("[%#020.11f]", f);
	printf("\n\n--------TEST 12: [%%+-020.10f]---------");
	printf("\n[%#020.10f]\n", f);
	ft_printf("[%#020.10f]", f);
	f = 2142;

	printf("\n\n--------TEST f = 2142 POSITIVE NUMBER ---------");
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
	printf("\n\n--------TEST 9: [%% 0f]---------");
	printf("\n[% 0f]\n", f);
	ft_printf("[% 0f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.f]---------");
	printf("\n[% 0.f]\n", f);
	ft_printf("[% 0.f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.1f]---------");
	printf("\n[% 0.1f]\n", f);
	ft_printf("[% 0.1f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.2f]---------");
	printf("\n[% 0.2f]\n", f);
	ft_printf("[% 0.2f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.3f]---------");
	printf("\n[% 0.3f]\n", f);
	ft_printf("[% 0.3f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.4f]---------");
	printf("\n[% 0.4f]\n", f);
	ft_printf("[% 0.4f]", f);
	printf("\n\n--------TEST 10: [%% 020.12f]---------");
	printf("\n[% 020.12f]\n", f);
	ft_printf("[% 020.12f]", f);
	printf("\n\n--------TEST 11: [%%#020.11f]---------");
	printf("\n[%#020.11f]\n", f);
	ft_printf("[%#020.11f]", f);
	printf("\n\n--------TEST 12: [%%+-020.10f]---------");
	printf("\n[%#020.10f]\n", f);
	ft_printf("[%#020.10f]", f);
	f = 2142.0123456789;

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
	printf("\n\n--------TEST 9: [%% 0f]---------");
	printf("\n[% 0f]\n", f);
	ft_printf("[% 0f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.3f]---------");
	printf("\n[% 0.3f]\n", f);
	ft_printf("[% 0.3f]", f);
	printf("\n\n--------TEST 10: [%% 020.12f]---------");
	printf("\n[% 020.12f]\n", f);
	ft_printf("[% 020.12f]", f);
	printf("\n\n--------TEST 11: [%%#020.11f]---------");
	printf("\n[%#020.11f]\n", f);
	ft_printf("[%#020.11f]", f);
	printf("\n\n--------TEST 12: [%%+-020.10f]---------");
	printf("\n[%#020.10f]\n", f);
	ft_printf("[%#020.10f]", f);


	f = 2142.123456789;

	printf("\n\n--------TEST f = 2142.123456789 POSITIVE NUMBER ---------");
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
	printf("\n\n--------TEST 9: [%% 0f]---------");
	printf("\n[% 0f]\n", f);
	ft_printf("[% 0f]", f);
	printf("\n\n--------TEST 9 bis: [%% 0.3f]---------");
	printf("\n[% 0.3f]\n", f);
	ft_printf("[% 0.3f]", f);
	printf("\n\n--------TEST 10: [%% 020.12f]---------");
	printf("\n[% 020.12f]\n", f);
	ft_printf("[% 020.12f]", f);
	printf("\n\n--------TEST 11: [%%#020.11f]---------");
	printf("\n[%#020.11f]\n", f);
	ft_printf("[%#020.11f]", f);
	printf("\n\n--------TEST 12: [%%+-020.10f]---------");
	printf("\n[%#020.10f]\n", f);
	ft_printf("[%#020.10f]", f);


	f = -2142.0123456789;
	printf("\n\n--------TEST f = -2142.0123456789 NEGATIVE NUMBER ---------");
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
	printf("\n\n--------TEST 7: [%%+15f]---------");
	printf("\n[%+15f]\n", f);
	ft_printf("[%+15f]", f);
	printf("\n\n--------TEST 8: [%%+f]---------");
	printf("\n[%+f]\n", f);
	ft_printf("[%+f]", f);
	printf("\n\n--------TEST 9: [%%-f]---------");
	printf("\n[%-f]\n", f);
	ft_printf("[%-f]", f);
	printf("\n\n--------TEST 10: [%%+-015f]---------");
	printf("\n[%+-015f]\n", f);
	ft_printf("[%+-015f]", f);
	printf("\n\n--------TEST 11: [%%015.f]---------");
	printf("\n[%015.f]\n", f);
	ft_printf("[%015.f]", f);
	printf("\n\n--------TEST 12: [%%.1f]---------");
	printf("\n[%.1f]\n", f);
	ft_printf("[%.1f]", f);
	printf("\n\n--------TEST 13: [%%0.1f]---------");
	printf("\n[%0.1f]\n", f);
	ft_printf("[%0.1f]", f);
	printf("\n\n--------TEST 14: [%%018.10f]---------");
	printf("\n[%018.10f]\n", f);
	ft_printf("[%018.10f]", f);
	printf("\n\n--------TEST 15: [%%18.7f]---------");
	printf("\n[%18.7f]\n", f);
	ft_printf("[%18.7f]", f);
	
	f = -2142;
	printf("\n\n--------TEST f = -2142 NEGATIVE NUMBER ---------");
	printf("\n\n--------TEST 16: [%%#18.f]---------");
	printf("\n[%#18.f]\n", f);
	ft_printf("[%#18.f]", f);
}