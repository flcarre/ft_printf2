/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:40:59 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/08 18:08:38 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa_base(long long n, char const *base)
{
	char				*tmp;
	unsigned int		len;
	int					b;

	b = (int)ft_strlen(base);
	len = ft_digitlen(n, b);
	if (!(tmp = ft_strnew(len)))
		return ((void *)0);
	tmp[0] = (n < 0) ? '-' : tmp[0];
	tmp[0] = (n == 0) ? base[0] : tmp[0];
	while (n)
	{
		tmp[len - 1] = base[((n % b) < 0) ? -(n % b) : n % b];
		n /= (long long)b;
		len--;
	}
	return (tmp);
}
