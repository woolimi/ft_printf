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

static void	init_pl(t_pl *pl)
{
	pl->f_minus = 0;
	pl->f_zpad = 0;
	pl->f_dot = 0;
	pl->min_w = 0;
	pl->precise = 0;
	pl->convert = 0;
}

int			get_num(char **form, va_list *ap)
{
	int	digit;

	if (**form == '*')
	{
		digit = va_arg(*ap, int);
		(*form)++;
	}
	else
	{
		digit = 0;
		while (ft_isdigit(**form))
		{
			digit = (digit * 10) + (**form - '0');
			(*form)++;
		}
	}
	return (digit);
}


//precision 이 있으면 zero_pad 작동 안함
int			make_pl(t_pl *pl, char *form, va_list *ap)
{
	char	*begin;

	begin = form;
	init_pl(pl);
	while (*form == ' ' && form++)
		;
	while (*form == '-' && form++)
		pl->f_minus = 1;
	while (*form == '0' && form++)
		pl->f_zpad = 1;
	pl->min_w = get_num(&form, ap);
	if (*form == '.' && form++)
		pl->f_dot = 1;
	pl->precise = get_num(&form, ap);
	pl->convert = *form++;
	return (form - begin);
}
