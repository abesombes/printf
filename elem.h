/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:37:42 by abesombe          #+#    #+#             */
/*   Updated: 2021/01/06 22:22:04 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEM_H
# define ELEM_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef int		t_bool;
typedef struct s_printf
{
	char	conv_s;
	char	length;
	int		displayed;
	int		width;
	int		preci;
	t_bool		star;
	t_bool	minus;
	t_bool	plus;
	t_bool	space;
	t_bool	sign_display;
	int		alter;
	t_bool	zero;
	t_bool	uc_x;
}				t_printf;

#endif
