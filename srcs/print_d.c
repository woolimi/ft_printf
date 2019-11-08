/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:25:29 by wpark             #+#    #+#             */
/*   Updated: 2019/10/30 10:25:30 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_without_fminus(char *ret, t_pl pl, int sign)
{
	int		len;
	int		p_len;
	int		size;
	int		i;
	char	*begin;

	begin = ret;
	len = ft_strlen(ret) - sign;
	p_len = (len > pl.precise) ? len : pl.precise;
	size = ((p_len + sign > pl.min_w) ? p_len + sign : pl.min_w);
	i = size - p_len - sign;
	while (i--)
	{
		if (pl.precise != -1)
			write(1, " ", 1);
		else if (pl.f_zpad == 1)
			write(1, "0", 1);
		else
			write(1, " ", 1);
	}
	if (sign)
		write(1, &*ret++, 1);
	i = p_len - len;
	while (i--)
		write(1, "0", 1);
	write(1, ret, len);
	free_all(begin);
	return (size);
}

static int	print_with_fminus(char *ret, t_pl pl, int sign)
{
	int		len;
	int		p_len;
	int		size;
	int		i;
	char	*begin;

	begin = ret;
	len = ft_strlen(ret) - sign;
	p_len = (len > pl.precise) ? len : pl.precise;
	size = ((p_len + sign > pl.min_w) ? p_len + sign : pl.min_w);
	if (sign)
		write(1, &*ret++, 1);
	i = p_len - len;
	while (i--)
		write(1, "0", 1);
	write(1, ret, len);
	i = size - p_len - sign;
	while (i--)
		write(1, " ", 1);
	free_all(begin);
	return (size);
}

static int	print_res(char *ret, t_pl pl, int sign)
{
	if (pl.f_minus)
		return (print_with_fminus(ret, pl, sign));
	else
		return (print_without_fminus(ret, pl, sign));
}

int			print_d(t_pl pl, va_list *ap)
{
	char    *ret;
	int     d;
	int		sign;

	d = va_arg(*ap, int);
	sign = (d > 0) ? 0 : 1;
	if (!(ret = ft_itoa_base(d, "0123456789", 10)))
		return (0);
	return (print_res(ret, pl, sign));
}
