/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:49:10 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/09 17:48:14 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputwstr(int *ws)
{
	long	i;
	long	r;

	i = 0;
	if (!ws)
		return (i);
	while (*ws)
	{
		if ((r = ft_iputwchar(*(ws++))) != -1)
			i += r;
		else
			return (r);
	}
	return (i);
}
