/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_pl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:18:17 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 11:18:19 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void init_pl(t_pl *pl)
{
    pl->f_minus = 0;
    pl->f_zpad = 0;
    pl->f_dot = 0;
    pl->min_w = 0;
    pl->precise = 0;
    pl->convert = 0;
}

//precision 이 있으면 zero_pad 작동 안함
int make_pl(t_pl *pl, char *form, va_list *ap)
{
    int digit;
    char *begin;

    begin = form;
    init_pl(pl);
    while (*form == ' ' && form++)
        ;
    while (*form == '-' && form++)
        pl->f_minus = 1;
    while (*form == '0' && form++)
        pl->f_zpad = 1;
    digit = 0;
    while (ft_isdigit(*form))
        digit = (digit * 10) + (*form++ - '0');
    pl->min_w = digit;
    if (*form == '*' && form++)
        pl->min_w = va_arg(*ap, int);
    if (*form == '.' && form++)
        pl->f_dot = 1;
    digit = 0;
    while (ft_isdigit(*form))
        digit = (digit * 10) + (*form++ - '0');
    pl->precise = digit;
    pl->convert = *form++;
    return (form - begin);
}
