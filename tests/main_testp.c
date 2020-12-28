/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 13:54:24 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/19 17:27:43 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int d = 21;
	void *ptr;

	ptr = (int *)&d;
	printf("\n\n--------TEST PTR = (VOID *)21 ---------"); 
	printf("\n\n--------TEST 1: [%%p]---------");
	printf("\n[%p]\n", ptr);
	ft_printf("[%p]", ptr);
	printf("\n\n--------TEST 2: [%%25p]---------");
	printf("\n[%25p]\n", ptr);
	ft_printf("[%25p]", ptr);
	printf("\n\n--------TEST 3: [%%-25p]---------");
	printf("\n[%-25p]\n", ptr);
	ft_printf("[%-25p]", ptr);
	printf("\n\n--------TEST 4: [%%-*p] ---------");
	printf("\n[%-*p]\n", 20, ptr);
	ft_printf("[%-*p]", 20, ptr);
}
