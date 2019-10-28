/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_print_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:03:57 by wpark             #+#    #+#             */
/*   Updated: 2019/10/25 17:03:59 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*cpy_form(char *s)
{
	int	fin;

	fin = 0;
	while (s[fin] != '\0' && !(check_flag(s[fin])))
		fin++;
	ft_strndup(s, fin + 1);
}

int		find_idx(char *form, int cnt)
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (form[idx] != '\0')
	{
		if (form[idx] == '%' && (idx != 0 && form[idx - 1] != '%')
			&& form[idx + 1] != '%')
			count++;
		if (count == cnt)
			break ;
		idx++;
	}
	return (idx);
}

t_plst	**make_print_list(char *form)
{
	int		nb;
	int		i;
	char	*s;
	t_plst	**plst;

	nb = check_form(form); // -1 or nb
	if ((plst = (t_plst**)malloc(sizeof(t_plst*) * (nb + 1))))
		return (0);
	i = 0;
	while (i < nb)
	{
		s = form + find_idx(form, (i + 1));
		plst[i] = cpy_form(s);
	}
	plst[i] = 0;
	return (plst);
}