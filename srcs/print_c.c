/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:27:31 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 11:27:33 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** %-10c (o)
** %10c (o)
** %010c (x)
** %.c (x)
*/

int print_c(t_pl pl, va_list *ap)
{
	char    *ret;
	char    c;

	c = va_arg(*ap, int);
	if (!pl.min_w)
		pl.min_w = 1;
	if (!(ret = sp_malloc(pl.min_w)))
		return (0);
	if (pl.f_minus)
		ret[0] = c;
	else
		ret[pl.min_w - 1] = c;
	write(1, ret, pl.min_w);
	free_all(ret);
	return (pl.min_w);
}