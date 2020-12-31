/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:10:48 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/31 16:41:21 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	int nb;
	float fl;
	int *ptr;
	int precision;

	fl = 12.46;
	nb = 12;
	precision = 4;
	ptr = &nb;
	printf("test multi flags %%p: [%10p] - nb = [% 18d] - fl = [%24.15f]\n", ptr, nb, fl);
	//ft_printf("test multi flags %%p: [%10p] - nb = [% 18d] - fl = [%24.15f]\n", ptr, nb, fl);
	ft_printf("test multi flags nb = [% 18d]  - %%p: [%10p] - fl = [%24.15f]\n", nb, ptr, fl);
}
