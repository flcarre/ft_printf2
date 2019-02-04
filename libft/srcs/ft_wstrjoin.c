/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:02:30 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/04 20:36:42 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_wstrjoin(int const *s1, int const *s2)
{
	int				*tmp;
	unsigned long	i;
	unsigned long	len;

	len = 0;
	if (!s1 && !s2)
		return ((void *)0);
	else if (!s1)
		len = ft_wstrlen(s2);
	else if (!s2)
		len = ft_wstrlen(s1);
	else
		len = ft_wstrlen(s1) + ft_wstrlen(s2);
	if (!(tmp = ft_wstrnew(len)))
		return ((void *)0);
	i = 0;
	while (s1 && *s1)
		*(tmp + (i++)) = *(s1++);
	while (s2 && *s2)
		*(tmp + (i++)) = *(s2++);
	return (tmp);
}
