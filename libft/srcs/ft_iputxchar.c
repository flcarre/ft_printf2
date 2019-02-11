/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputxchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:07:24 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/09 17:47:54 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputxchar(char c, unsigned long x)
{
	long	i;
	long	r;

	i = 0;
	if (!x)
		return (i);
	while (x--)
	{
		if ((r = ft_iputchar(c)) != -1)
			i += r;
		else
			return (r);
	}
	return (i);
}
