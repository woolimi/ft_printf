/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_sp_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:35:30 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 14:35:31 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *sp_malloc(int size)
{
    char    *ret;
    int     i;

    if (!(ret = (char*)malloc(sizeof(char) * (size + 1))))
        return (0);
    i = 0;
    while (size--)
        ret[i++] = ' ';
    ret[i] = '\0';
    return (ret);
}