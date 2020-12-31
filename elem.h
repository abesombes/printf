/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:37:42 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/30 16:52:52 by abesombe         ###   ########.fr       */
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
	char	conv_spec;
	char	length;
	int		displayed;
	int		width;
	int		precision;
	t_bool	minus;
	t_bool	plus;
	t_bool	space;
	int		alternate;
	t_bool	zero;
	t_bool	uc_x;
}				t_printf;

#endif
