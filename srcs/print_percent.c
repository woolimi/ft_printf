/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 21:26:02 by wpark             #+#    #+#             */
/*   Updated: 2019/11/08 21:26:03 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_percent(t_pl pl, va_list *ap)
{
	char	*ret;

	(void)ap;
	if (!pl.min_w)
		pl.min_w = 1;
	if (!(ret = sp_malloc(pl.min_w)))
		return (0);
	if (pl.f_minus)
		ret[0] = '%';
	else
		ret[pl.min_w - 1] = '%';
	write(1, ret, pl.min_w);
	free_all(ret);
	return (pl.min_w);
}
