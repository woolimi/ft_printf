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

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	int		i;
	int		cnt;
	t_pl	pl;
	va_list	ap;
	char*	f;

	f = (char*)form;
	if (check_form(f) == -1)
		return (0);
	i = -1;
	cnt = 0;
	va_start(ap, form);
	while (f[++i] != '\0')
		if (f[i] == '%' && ((i > 0 && f[i - 1] != '%') || f[i + 1] != '%'))
		{
			f = f + make_pl(&pl, f + i + 1, &ap);
			cnt = cnt + print_and_count(pl, &ap);
		}
		else
		{
			write(1, &f[i], 1);
			cnt++;
		}
	va_end(ap);
	return (cnt);
}

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
