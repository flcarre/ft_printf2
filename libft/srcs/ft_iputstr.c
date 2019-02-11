/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:07:24 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/09 17:48:01 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputstr(char const *s)
{
	long	i;
	long	r;

	i = 0;
	if (!s)
		return (i);
	while (*s)
	{
		if ((r = ft_iputchar(*(s++))) != -1)
			i += r;
		else
			return (r);
	}
	return (i);
}
