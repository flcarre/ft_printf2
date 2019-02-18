/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputnwstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:49:10 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/18 17:31:02 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputnwstr(int *ws, unsigned long n)
{
	long	i;
	long	r;

	i = 0;
	if (!w || !n)
		return (i);
	while (n-- && *ws)
	{
		if ((r = ft_iputwchar(*(ws++))) != -1)
			i += r;
		else
			return (r);
	}
	return (i);
}
