/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:27:10 by wpark             #+#    #+#             */
/*   Updated: 2019/10/30 12:27:11 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr_by_base(unsigned int nbr, int b_len)
{
	int cnt;

	if (nbr == 0)
		return (1);
	cnt = 0;
	while (nbr > 0)
	{
		nbr = nbr / b_len;
		cnt++;
	}
	return (cnt);
}

char		*ft_utoa_base(unsigned int n, char *base, int b_len)
{
	char			*res;
	int				len;

	len = len_nbr_by_base(n, b_len);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	res[len--] = '\0';
	while (len >= 0)
	{
		res[len] = base[n % b_len];
		n = n / b_len;
		len--;
	}
	return (res);
}
