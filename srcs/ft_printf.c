/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:03:30 by wpark             #+#    #+#             */
/*   Updated: 2019/10/21 14:45:28 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_percent(int *cnt, int *i)
{
	write(1, "%", 1);
	*cnt = *cnt + 1;
	*i = *i + 1;
}

static void	print_normal(char c, int *cnt)
{
	write(1, &c, 1);
	*cnt = *cnt + 1;
}

static int	print(char *f, va_list *ap)
{
	int		i;
	int		cnt;
	t_pl	pl;

	i = 0;
	cnt = 0;
	while (f[i] != '\0')
	{
		if (f[i] == '%' && (f[i + 1] == '%'))
			print_percent(&cnt, &i);
		else if (f[i] == '%' && ((i > 1 && f[i - 1] != '%') || f[i + 1] != '%'))
		{
			f = f + make_pl(&pl, f + i + 1, ap);
			cnt = cnt + print_and_count(pl, ap);
		}
		else
			print_normal(f[i], &cnt);
		i++;
	}
	return (cnt);
}

int			ft_printf(const char *form, ...)
{
	char	*f;
	int		cnt;
	va_list	ap;

	f = (char*)form;
	if (check_form(f) == -1)
		return (0);
	va_start(ap, form);
	cnt = print(f, &ap);
	va_end(ap);
	return (cnt);
}
