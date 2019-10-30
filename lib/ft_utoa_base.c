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

static int	len_nbr_by_base(unsigned long nbr, int b_len)
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

static void	put_null_and_sign(char *res, int len, int sign)
{
	res[len] = '\0';
	if (sign == 1)
		res[0] = '-';
}

char		*ft_utoa_base(unsigned long n, char *base, int b_len)
{
	char			*res;
	int				len;
	int				sign;

	len = 0;
	sign = 0;
	len = len + len_nbr_by_base(n, b_len);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	put_null_and_sign(res, len, sign);
	while (--len >= sign)
	{
		res[len] = base[n % b_len];
		n = n / b_len;
	}
	return (res);
}
