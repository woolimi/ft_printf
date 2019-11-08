/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:20:51 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 11:20:52 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			check_minus(char c)
{
	if (c == '-')
		return (1);
	return (0);
}

int			check_conversion(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
			|| c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (c);
	return (0);
}

static int	ret(int ck, int cnt)
{
	if (ck >= 2)
		return (-1);
	return (cnt);
}

int			check_form(char *f)
{
	int	st_form;
	int	ck;
	int	cnt;

	ck = 0;
	st_form = 0;
	cnt = 0;
	if (!f)
		return (-1);
	while (*f != '\0')
	{
		if (*f == '%' && st_form == 0 && (st_form = 1))
			ck++;
		else if (*f == '%' && st_form == 1 && *(f - 1) == '%' && !(st_form = 0))
			ck = 0;
		else if (*f == '%' && st_form == 1 && *(f - 1) != '%')
			return (-1);
		else if (st_form == 1 && check_conversion(*f) && !(st_form = 0))
		{
			ck = 0;
			cnt++;
		}
		f++;
	}
	return (ret(ck, cnt));
}
