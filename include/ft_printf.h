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
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

/*
**	%5.5d
**
**	precision	: nb after point
**	zero		: 
*/

typedef struct	s_pl
{
	int			f_minus;
	int			f_zpad;
	int			f_dot;
	int			min_w;
	int			precise;
	char		convert;
}				t_pl;

int		ft_printf(const char *form, ...);
int 	check_form(char *f);
int		check_minus(char c);
int		check_conversion(char c);
int		make_pl(t_pl *pl, char *form, va_list *ap);
int		print_and_count(t_pl pl, va_list *ap);
int 	print_c(t_pl pl, va_list *ap);
int		print_s(t_pl pl, va_list *ap);
int		print_p(t_pl pl, va_list *ap);
int		print_d(t_pl pl, va_list *ap);
int		print_u(t_pl pl, va_list *ap);
int		print_x(t_pl pl, va_list *ap);
char	*sp_malloc(int size, char op);
void	free_all(void *ptr);

#endif
