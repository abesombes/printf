/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 00:46:42 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/20 00:56:03 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int u = 21;

	printf("\n\n--------TEST U = 21 POSITIVE NUMBER ---------");
	printf("\n\n--------TEST 1: %%u---------");
	printf("\nreal:[%u]\n", u);
	ft_printf("mine:[%u]", u);
	printf("\n\n--------TEST 2: %%5u---------");
	printf("\nreal:[%5u]\n", u);
	ft_printf("mine:[%5u]", u);
	printf("\n\n--------TEST 2 bis: u = 1234567890 et %%5u---------");
	printf("\nreal:[%5u]\n", 1234567890);
	ft_printf("mine:[%5u]", 1234567890);
	printf("\n\n--------TEST 2 ter: u = 1234567890 et %%5.6u---------");
	printf("\nreal:[%5.6u]\n", 1234567890);
	ft_printf("mine:[%5.6u]", 1234567890);
	printf("\n\n--------TEST 3: %%-5u---------");
	printf("\nreal:[%-5u]\n", u);
	ft_printf("mine:[%-5u]", u);
	printf("\n\n--------TEST 4: %%05u---------");
	printf("\nreal:[%05u]\n", u);
	ft_printf("mine:[%05u]", u);
	printf("\n\n--------TEST 4 bis: %%-05u---------");
	printf("\nreal:[%-05u]\n", u);
	ft_printf("mine:[%-05u]", u);
	printf("\n\n--------TEST 5: %%+5u---------");
	printf("\nreal:[%+5u]\n", u);
	ft_printf("mine:[%+5u]", u);
	printf("\n\n--------TEST 5 bis: %%+2u---------");
	printf("\nreal:[%+2u]\n", u);
	ft_printf("mine:[%+2u]", u);
	printf("\n\n--------TEST 6: %%+05u---------");
	printf("\nreal:[%+05u]\n", u);
	ft_printf("mine:[%+05u]", u);
	printf("\n\n--------TEST 7: %%+-5u---------");
	printf("\nreal:[%+-5u]\n", u);
	ft_printf("mine:[%+-5u]", u);
	printf("\n\n--------TEST 8: %%+u---------");
	printf("\nreal:[%+u]\n", u);
	ft_printf("mine:[%+u]", u);
	printf("\n\n--------TEST 9: %%+*u---------");
	printf("\nreal:[%+*u]\n", 5, u);
	ft_printf("mine:[%+*u]", 5, u);
	printf("\n\n--------TEST 10: %%+-0*u---------");
	printf("\n[%+-0*u]\n", 10, u);
	ft_printf("[%+-0*u]", 10, u);
	printf("\n\n--------TEST 11: %%.6u---------");
	printf("\n[%.6u]\n", u);
	ft_printf("[%.6u]", u);
	printf("\n\n--------TEST 12: %%10.6u---------");
	printf("\n[%10.6u]\n", u);
	ft_printf("[%10.6u]", u);
	printf("\n\n--------TEST 13: %%-10.6u---------");
	printf("\n[%-10.6u]\n", u);
	ft_printf("[%-10.6u]", u);
	printf("\n\n--------TEST 14: %%010.6u---------");
	printf("\n[%010.6u]\n", u);
	ft_printf("[%010.6u]", u);
	printf("\n\n--------TEST 14 bis: %%010u---------");
	printf("\n[%010u]\n", u);
	ft_printf("[%010u]", u);
	printf("\n\n--------TEST 15: %%+10.6u---------");
	printf("\n[%+10.6u]\n", u);
	ft_printf("[%+10.6u]", u);
	printf("\n\n--------TEST 16: %%+010.6u---------");
	printf("\n[%+010.6u]\n", u);
	ft_printf("[%+010.6u]", u);
	printf("\n\n--------TEST 17: %%+-10.6u---------");
	printf("\n[%+-10.6u]\n", u);
	ft_printf("[%+-10.6u]", u);
	printf("\n\n--------TEST 17 bis: %% +-10.6u---------");
	printf("\n[% +-10.6u]\n", u);
	ft_printf("[% +-10.6u]", u);
	printf("\n\n--------TEST 17 bis bis: %% -10.6u---------");
	printf("\n[% -10.6u]\n", u);
	ft_printf("[% -10.6u]", u);
	printf("\n\n--------TEST 18: %%+.6u---------");
	printf("\n[%+.6u]\n", u);
	ft_printf("[%+.6u]", u);
	printf("\n\n--------TEST 19: %%+*.6u---------");
	printf("\n[%+*.6u]\n", 10, u);
	ft_printf("[%+*.6u]", 10, u);
	printf("\n\n--------TEST 20: %%+-0*.6u---------");
	printf("\n[%+-0*.6u]\n", 10, u);
	ft_printf("[%+-0*.6u]", 10, u);
	printf("\n\n--------TEST 21: %%-06u---------");
	printf("\n[%-06u]\n", u);
	ft_printf("[%-06u]", u);
	printf("\n\n--------TEST 22: %% -6u---------");
	printf("\n[% -6u]\n", u);
	ft_printf("[% -6u]", u);
	printf("\n\n--------TEST 23: %% -u---------");
	printf("\n[% -u]\n", u);
	ft_printf("[% -u]", u);
	printf("\n\n--------TEST 24: %% u---------");
	printf("\n[% u]\n", u);
	ft_printf("[% u]", u);
	printf("\n\n--------TEST 25: %% -.3u---------");
	printf("\n[% -.3u]\n", u);
	ft_printf("[% -.3u]", u);
	printf("\n\n--------TEST 26: %% -.4u---------");
	printf("\n[% -.4u]\n", u);
	ft_printf("[% -.4u]", u);
	printf("\n\n--------TEST 27: %% -.5u---------");
	printf("\n[% -.5u]\n", u);
	ft_printf("[% -.5u]", u);
	printf("\n\n--------TEST 28: %% -10.6u---------");
	printf("\n[% -10.6u]\n", u);
	ft_printf("[% -10.6u]", u);
	printf("\n\n--------TEST 29: %% +-u---------");
	printf("\n[% +-u]\n", u);
	ft_printf("[% +-u]", u);
	printf("\n\n--------TEST 30: %% +-6u---------");
	printf("\n[% +-6u]\n", u);
	ft_printf("[% +-6u]", u);
	printf("\n\n--------TEST 31: u = 0 - %% -6u---------");
	printf("\n[% -6u]\n", 0);
	ft_printf("[% -6u]", 0);
	printf("\n\n--------TEST 32: %% -6u---------");
	printf("\n[% -6u]\n", u);
	ft_printf("[% -6u]", u);
}
