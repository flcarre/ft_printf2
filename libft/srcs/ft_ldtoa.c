/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:17:57 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/04 05:25:33 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_ieee.h"

char		*ft_ldtoa(long double x)
{
	char			*a;
	char			*p;
	unsigned int	i[2];
	t_u_ieee_ld		u;

	i[0] = ft_ld_ldiglen(x, 10.0L);
	if (!(a = ft_strnew((unsigned long)i[0] + 16445 + 1)))
		return ((void *)0);
	p = a + i[0] + 16445 + 1;
	u.ld = x;
	i[1] = 0;
	while (p > a && i[1] < LD_FLB)
	{
		
	}
	return (a);
}
