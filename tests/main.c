/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:10:48 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/31 18:22:09 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	int totalmyptf;
	int totalrealptf;
	int nb;
	float fl;
	int *ptr;
	int precision;

	fl = 12.46;
	nb = 12;
	precision = 4;
	ptr = &nb;
	totalrealptf=printf("test multi flags %%p: [%10p] - nb = [% 18d] - fl = [%24.15f]\n", ptr, nb, fl);
	totalmyptf=ft_printf("test multi flags %%p: [%10p] - nb = [% 18d] - fl = [%24.15f]\n", ptr, nb, fl);
	printf("REALPTF: %i vs TOTALPTF: %i", totalrealptf, totalmyptf);
}
