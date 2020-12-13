/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <abesombe@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:37:42 by abesombe          #+#    #+#             */
/*   Updated: 2020/12/09 13:27:10 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEM_H
# define ELEM_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef int		t_bool;
typedef struct	s_printf
{
	char	*start;
	char	conv_spec;
	void	*data;
	int		width;
	int		precision;
	t_bool	minus;
	t_bool	plus;
	t_bool	space;
	t_bool	alternate;
	t_bool	zero;
	t_bool	dot;
}				t_printf;

#endif
