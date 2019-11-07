/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:54:21 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 14:54:22 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** %-10s (o)
** %10s (o)
** %010s (x) but i did.
** %.c (x)
*/

static char	*copy_to_ret(unsigned int size, unsigned int len, char *s, t_pl pl)
{
	char			*ret;
	unsigned int	space;
	unsigned int	i;

	if (!(ret = sp_malloc(size, 's')))
		return (0);
	i = 0;
	if (pl.f_minus)
		while (len--)
			ret[i++] = *s++;
	else
	{
		space = size - len;
		while (space--)
		{
			if (pl.f_zpad)
				ret[i] = '0'; 
			i++;
		}
		while (len--)
			ret[i++] = *s++;
	}
	return (ret);
}

int			print_s(t_pl pl, va_list *ap)
{
	char	*ret;
	char	*s;
	int		len;
	int		size;

	s = va_arg(*ap, char*);
	if (!s)
		s = "(null)";
	len = ft_strlen(s); 
	len = (pl.precise != -1 && len > pl.precise) ? pl.precise : len;
	size = (len > pl.min_w) ? len : pl.min_w;
	//  printf("min_w : %d\n", pl.min_w);
	//  printf("precise : %d\n", pl.precise);
	// printf("size :%d\n", size);
	if (!(ret = copy_to_ret(size, len, s, pl)))
		return (0);
	write(1, ret, size);
	free_all(ret);
	return (size);
}
