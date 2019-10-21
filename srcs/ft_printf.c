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

int	ft_printf(const char *form, ...)
{
	va_list	ap;

	va_start(ap, form);

	form = 0;
	va_end(ap);
	return (0);
}
