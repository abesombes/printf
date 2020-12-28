/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 20:10:45 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/22 21:48:46 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char *s;

	s = "Hello world!";
	printf("\n\n--------TEST 1: [%%s]---------");
	printf("\n[%s]\n", s);
	ft_printf("[%s]", s);
	printf("\n\n--------TEST 2: [%%15s]---------");
	printf("\n[%5s]\n", s);
	ft_printf("[%5s]", s);
	printf("\n\n--------TEST 3: [%%#+-010s]---------");
	printf("\n[%#+-010s]\n", s);
	ft_printf("[%#+-10s]", s);
	printf("\n\n--------TEST 4: [%%.10s]---------");
	printf("\n[%.10s]\n", s);
	ft_printf("[%.10s]", s);
	printf("\n\n--------TEST 5: [%%-15s]---------");
	printf("\n[%-15s]\n", s);
	ft_printf("[%-15s]", s);
	printf("\n\n--------TEST 6: [%%.15s]---------");
	printf("\n[%.15s]\n", s);
	ft_printf("[%.15s]", s);
	printf("\n\n--------TEST 6bis: [%%.12s]---------");
	printf("\n[%.12s]\n", s);
	ft_printf("[%.12s]", s);
	printf("\n\n--------TEST 6ter: [%%.13s]---------");
	printf("\n[%.13s]\n", s);
	ft_printf("[%.13s]", s);
	printf("\n\n--------TEST 6quarter: [%%.14s]---------");
	printf("\n[%.14s]\n", s);
	ft_printf("[%.14s]", s);
	printf("\n\n--------TEST 7: [%%-10s]---------");
	printf("\n[%-10s]\n", s);
	ft_printf("[%-10s]", s);
	printf("\n\n--------TEST 8: [%%15.10s]---------");
	printf("\n[%15.10s]\n", s);
	ft_printf("[%15.10s]", s);
	printf("\n\n--------TEST 9: [%%-15.10s]---------");
	printf("\n[%-15.10s]\n", s);
	ft_printf("[%-15.10s]", s);
	printf("\n\n--------TEST 10: [%%#020s]---------");
	printf("\n[%#020s]\n", s);
	ft_printf("[%#020s]", s);
}
