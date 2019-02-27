/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputnwstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:49:10 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/27 14:51:25 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputnwstr(int *ws, unsigned long n)
{
	long	i;
	long	r;

	i = 0;
	if (!ws || !n)
		return (i);
	while (n && *ws)
	{
		if ((r = ft_iputwchar(*(ws++))) != -1)
			i += r;
		else
			return (r);
		n -= (n > (unsigned long)r) ? r : n;
	}
	return (i);
}
