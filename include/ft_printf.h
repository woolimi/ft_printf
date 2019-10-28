/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:51:38 by wpark             #+#    #+#             */
/*   Updated: 2019/10/21 13:34:55 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_F
# define FT_PRINT_F

# include <stdarg.h>
# include <stdlib.h>

/*
**	%5.5d
**
**	precision	: nb after point
**	zero		: 
*/

typedef struct	s_plst
{
    char		*form;
}				t_plst;

int		ft_printf(const char *form, ...);
int 	check_form(char *f);
int     check_flag(char c);
#endif
