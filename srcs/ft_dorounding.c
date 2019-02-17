/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dorounding.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:14:55 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/14 17:02:23 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <float.h>

static void	ft_process(unsigned int *p[4], unsigned int x, unsigned int i)
{
	if (*p[3] % i >= 5 * i / 10)
		*p[3] = *p[3] + i;
	*p[3] -= x;
	while (*p[3] >= 999999999)
	{
		*(p[3]--) = 0;
		(p[3] < p[1]) ? (*(--p[1]) = 0) : 0;
		(*p[3])++;
	}
}

void		ft_dorounding(unsigned int *p[4], t_id *e)
{
	int				pr;
	unsigned int	i;
	unsigned int	x;

	pr = e->p;
	if (pr < 9 * (p[0] - p[2] - 1))
	{
		p[3] = p[2] + 1 + ((pr + 9 * LDBL_MAX_EXP) / 9 - LDBL_MAX_EXP);
		pr += 9 * LDBL_MAX_EXP;
		pr %= 9;
		i = 10;
		pr++;
		while (pr < 9)
		{
			i *= 10;
			pr++;
		}
		x = *p[3] % i;
		if (x || p[3] + 1 != p[0])
			ft_process(p, x, i);
		(p[0] > p[3] + 1) ? (p[0] = p[3] + 1) : 0;
	}
}
