/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 13:54:24 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/13 13:56:56 by abesombe         ###   ########.fr       */
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
	printf("\n\n--------TEST 1---------");
	printf("\n[%p]", ptr);
	ft_printf("[%p]", ptr);
}
