/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:10:11 by wpark             #+#    #+#             */
/*   Updated: 2019/10/25 17:10:13 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int check_conversion(char c)
{
    if (c == 'c' || c == 's' || c == 'p' || c == 'd'
            || c == 'i' || c == 'u' || c == 'x' || c == 'X')
        return (c);
    return (0);
}

int check_form(char *f)
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
        else if (st_form == 1 && check_flag(*f) && !(st_form = 0) && !(ck = 0))
			cnt++;
		f++;
    }
	if (ck >= 2)
		return (-1);
	return (cnt);
}