/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:52:31 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 16:52:32 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_ptr(char *ptr)
{
	write(1, "0x", 2);
	write(1, ptr, ft_strlen(ptr));
}

static void	print_res(char *ptr, t_pl pl, int sp)
{
	if (pl.f_minus)
	{
		print_ptr(ptr);
		while (sp--)
			write(1, " ", 1);
	}
	else
	{
		while (sp--)
		{
			if (pl.f_zpad)
				write(1, "0", 1);
			else
				write(1, " ", 1);
		}
		print_ptr(ptr);
	}
}

int			print_p(t_pl pl, va_list *ap)
{
	long	n;
	char	*ret;
	int		size;
	int		len;

	n = (unsigned long)va_arg(*ap, void*);
	if (!(ret = ft_itoa_base(n, "0123456789abcdef", 16)))
		return (0);
	len = ft_strlen(ret) + 2;
	size = (len > pl.min_w) ? len : pl.min_w;
	print_res(ret, pl, size - len);
	free_all(ret);
	return (size);
}
