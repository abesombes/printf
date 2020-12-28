/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:39:42 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/27 23:33:26 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	float e = 1234.56789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 1234.56789 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = 100;	
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 100 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = 100.01;	
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 100.01 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = 100.0002;	
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 100.0002 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);


	e = 100.0001;	
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 100.0001 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.5e]---------");
	printf("\n[% 25.5e]\n", e);
	ft_printf("[% 25.5e]", e);
	printf("\n\n--------TEST 10: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = 12345.6789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 12345.6789 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = 10000.006789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 10000.006789 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = 123456.789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 123456.789 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = 1234567.89;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 1234567.89 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = 12345678.9;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 12345678.9 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	e = 9876543.21;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 9876543.21 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = 123.456789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 123.456789 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = 12.3456789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 12.3456789 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = 0.0123456789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 0.0123456789 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 0.0123456789 POSITIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = 0;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = 0 POSITIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = -100.0002;	
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -100.0002 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);


	e = -100.0001;	
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -100.0001 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.5e]---------");
	printf("\n[% 25.5e]\n", e);
	ft_printf("[% 25.5e]", e);
	printf("\n\n--------TEST 10: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = -12345.6789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -12345.6789 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = -10000.006789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -10000.006789 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = -123456.789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -123456.789 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = -1234567.89;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -1234567.89 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = -12345678.9;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -12345678.9 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = -9876543.21;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -9876543.21 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = -123.456789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -123.456789 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
	
	e = -12.3456789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -12.3456789 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);

	e = -0.0123456789;

	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST e = -0.0123456789 NEGATIVE NUMBER ---------"); 
	printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); 
	printf("\n\n--------TEST 1: [%%e]---------");
	printf("\n[%e]\n", e);
	ft_printf("[%e]", e);
	printf("\n\n--------TEST 2: [%%25e]---------");
	printf("\n[%25e]\n", e);
	ft_printf("[%25e]", e);
	printf("\n\n--------TEST 3: [%%-25e]---------");
	printf("\n[%-25e]\n", e);
	ft_printf("[%-25e]", e);
	printf("\n\n--------TEST 4: [%%025e]---------");
	printf("\n[%025e]\n", e);
	ft_printf("[%025e]", e);
	printf("\n\n--------TEST 5: [%%+25e]---------");
	printf("\n[%+25e]\n", e);
	ft_printf("[%+25e]", e);
	printf("\n\n--------TEST 6: [%%+025e]---------");
	printf("\n[%+025e]\n", e);
	ft_printf("[%+025e]", e);
	printf("\n\n--------TEST 7: [%%+-25e]---------");
	printf("\n[%+-25e]\n", e);
	ft_printf("[%+-25e]", e);
	printf("\n\n--------TEST 8: [%%+e]---------");
	printf("\n[%+e]\n", e);
	ft_printf("[%+e]", e);
	printf("\n\n--------TEST 9: [%% 25.7e]---------");
	printf("\n[% 25.7e]\n", e);
	ft_printf("[% 25.7e]", e);
}