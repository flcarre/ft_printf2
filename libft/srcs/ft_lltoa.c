/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:09:13 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/07 16:41:33 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_lltoa(long long n)
{
	unsigned int	i;
	long long		x;
	char			*tmp;

	i = ft_digitlen(n, 10);
	if (!(tmp = ft_strnew((unsigned long)i)))
		return ((void *)0);
	*tmp = (n < 0) ? '-' : '\0';
	x = n;
	while ((n < 0) ? (--i) : (i--))
	{
		*(tmp + i) = '0' + ((x % 10 < 0) ? -(x % 10) : x % 10);
		x /= 10;
	}
	return (tmp);
}
