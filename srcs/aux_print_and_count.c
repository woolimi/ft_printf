/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_print_and_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:22:29 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 11:22:32 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_and_count(t_pl pl, va_list *ap)
{
    if (pl.convert == 'c')
        return (print_c(pl, ap));
    if (pl.convert == 's')
        return (print_s(pl, ap));
    if (pl.convert == 'p')
        return (print_p(pl, ap));
    if (pl.convert == 'd' || pl.convert == 'i')
        return (print_d(pl, ap));
    if (pl.convert == 'x' || pl.convert == 'X')
        return (print_x(pl, ap));
    return (0);
}