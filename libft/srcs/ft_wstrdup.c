/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:41:39 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/03 15:51:59 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_wstrdup(const int *s1)
{
	int				*cpy;
	unsigned long	i[2];

	i[0] = ft_wstrlen(s1);
	if (!(cpy = ft_wstrnew(i[0])))
		return ((void *)0);
	i[1] = 0;
	while (i[1] < i[0])
		cpy[i[1]++] = *(s1++);
	return (cpy);
}
