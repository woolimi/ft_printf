/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:59:14 by wpark             #+#    #+#             */
/*   Updated: 2019/10/29 11:59:16 by wpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
char 	*ft_itoa_base(long nbr, char *base, int b_len);
char    *ft_utoa_base(unsigned int n, char *base, int b_len);
size_t 	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif