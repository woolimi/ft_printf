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

void	put_minus_into_pl(t_pl *pl, char *form)
{
	int	i;

	i = 0;
	while (form[i] != '\0')
	{
		if (check_conversion(form[i]))
			break;
		if (form[i] == '-')
		{
			pl->minus = 1;
		}
		i++;
	}
}
void	init_pl(t_pl *pl)
{
	pl->convert = 0;
	pl->
}

int	ft_printf(const char *form, ...)
{
	int		i;
	int		cnt;
	t_pl	pl;
	va_list	ap;

	if (check_form(form) == -1)
		return (0);
	i = 0;
	cnt = 0;
	va_start(ap, form);
	while (form[i] != '\0')
	{
		if (form[i] == '%' && (i > 0 && form[i - 1] != '%') && form[i + 1] != '%')
		{
			init_pl(&pl);
			put_minus_into_pl(&pl, form + i);
			ft_isdigit(form[i])
			cnt = cnt + print(pl, ap);
		}
		write(1, &form[i], 1);
		cnt++;
		i++;
	}
	va_end(ap);
	return (0);
}
