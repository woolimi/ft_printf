/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:03:30 by wpark             #+#    #+#             */
/*   Updated: 2019/10/21 14:45:28 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** conversions : c s p d i u x X %
** c : charactor
** s : string
** p : pointer
** d : int
** i : int
** u : unsigned int
** x : int -> hex
** X : int -> HEX
**
** flags : - 0 . *
** - : arrange to left
** 0 : fill up 0 if there is space
*/

/*
** precision
** zero
** minus
** star
*/

#include "ft_printf.h"

int	is_percent(char c)
{
	if (c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *form, ...)
{
	int		i;
	t_plst	**pl;
	va_list	ap;

	i = 0;
	va_start(ap, form);
	if (!(pl = make_print_list(form)))
		return (0);
	va_end(ap);
	return (0);
}
