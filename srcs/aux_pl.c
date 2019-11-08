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
	pl->precise = -1;
	pl->convert = 0;
}

static void	get_min_w(t_pl *pl, char **form, va_list *ap)
{
	int	digit;

	digit = 0;
	while (**form == '-' || **form == '0')
	{
		if (**form == '-')
			pl->f_minus = 1;
		else if (**form == '0')
			pl->f_zpad = 1;
		(*form)++;
	}
	while (**form != '.' && !check_conversion(**form))
	{
		if (**form == '-' && (pl->f_minus = 1))
		{
			if (digit != 0)
				pl->min_w = digit;
			digit = 0;
		}
		else if (ft_isdigit(**form))
			digit = (digit * 10) + (**form - '0');
		else if (**form == '*')
		{
			if ((pl->min_w = va_arg(*ap, int)) < 0)
			{
				pl->min_w = -1 * pl->min_w;
				pl->f_minus = 1;
			}
			digit = 0;
		}
		(*form)++;
	}
	pl->min_w = (digit) ? digit : pl->min_w;
}

static void get_precision(t_pl *pl, char **form, va_list *ap)
{
	int digit;

	digit = 0;
	while (!check_conversion(**form))
	{
		if (**form == '-' && (pl->f_minus = 1))
		{
			if (digit != 0)
				pl->precise = digit;
			digit = 0;
		}
		else if (ft_isdigit(**form))
			digit = (digit * 10) + (**form - '0');
		else if (**form == '*')
		{
			if ((pl->precise = va_arg(*ap, int)) < 0)
				pl->precise = -1;
			digit = pl->precise;
		}
		(*form)++;
	}
	pl->precise = digit;
}

int			make_pl(t_pl *pl, char *form, va_list *ap)
{
	char	*begin;

	begin = form;
	init_pl(pl);
	get_min_w(pl, &form, ap);
	if (*form == '.')
		get_precision(pl, &form, ap);
	pl->convert = *form++;
	return (form - begin);
}
