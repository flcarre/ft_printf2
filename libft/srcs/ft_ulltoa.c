/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:09:13 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/06 15:23:57 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa(unsigned long long n)
{
	unsigned int	i;
	char			*tmp;

	i = ft_udigitlen(n, 10);
	if (!(tmp = ft_strnew((unsigned long)i)))
		return ((void *)0);
	while (i--)
	{
		*(tmp + i) = '0' + n % 10;
		n /= 10;
	}
	return (tmp);
}
