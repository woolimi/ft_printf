/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:23:35 by wpark             #+#    #+#             */
/*   Updated: 2019/10/30 12:23:36 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_without_fminus(char *ret, t_pl pl)
{
	int len;
	int p_len;
	int size;
	int i;

	len = ft_strlen(ret);
	p_len = (len > pl.precise) ? len : pl.precise;
	size = (p_len > pl.min_w) ? p_len : pl.min_w;
	i = size - p_len;
	while (i--)
	{
		if (pl.precise != -1)
			write(1, " ", 1);
		else if (pl.f_zpad == 1)
			write(1, "0", 1);
		else
			write(1, " ", 1);
	}
	i = p_len - len;
	while (i--)
		write(1, "0", 1);
	write(1, ret, len);
	free_all(ret);
	return (size);
}

static int	print_with_fminus(char *ret, t_pl pl)
{
	int len;
	int p_len;
	int size;
	int i;

	len = ft_strlen(ret);
	p_len = (len > pl.precise) ? len : pl.precise;
	size = (p_len > pl.min_w) ? p_len : pl.min_w;
	i = p_len - len;
	while (i--)
		write(1, "0", 1);
	write(1, ret, len);
	i = size - p_len;
	while (i--)
		write(1, " ", 1);
	free_all(ret);
	return (size);
}

static int	print_res(char *ret, t_pl pl)
{
	if (pl.f_minus)
		return (print_with_fminus(ret, pl));
	else
		return (print_without_fminus(ret, pl));
}

int			print_u(t_pl pl, va_list *ap)
{
	char			*ret;
	unsigned int	u;

	u = va_arg(*ap, unsigned int);
	if (!(ret = ft_utoa_base(u, "0123456789", 10)))
		return (0);
	return (print_res(ret, pl));
}
