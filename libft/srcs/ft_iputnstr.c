/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:07:24 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/13 18:02:59 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputnstr(char const *s, unsigned long n)
{
	long	i;
	long	r;

	i = 0;
	if (!s || !n)
		return (i);
	while (n-- && *s)
	{
		if ((r = ft_iputchar(*(s++))) != -1)
			i += r;
		else
			return (r);
	}
	return (i);
}
