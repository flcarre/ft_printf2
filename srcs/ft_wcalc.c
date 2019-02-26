/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcalc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:05:35 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/26 15:57:56 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_0(t_id *e, unsigned long long x)
{
	if (e->id[0] == 'o')
	{
		if (e->p[1] && e->p[0] > ft_udigitlen(x, 8))
			e->w = (e->w >= e->p[0]) ? e->w - e->p[0] : 0;
		else
			e->w -= (e->w >= ft_udigitlen(x, 8)) ? ft_udigitlen(x, 8) : e->w;
	}
	else if (e->id[0] == 'x' || e->id[0] == 'X' || e->id[0] == 'p')
	{
		if (e->p[1] && e->p[0] > ft_udigitlen(x, 16))
			e->w = (e->w >= e->p[0]) ? e->w - e->p[0] : 0;
		else
			e->w -= (e->w >= ft_udigitlen(x, 16)) ? ft_udigitlen(x, 16) : e->w;
	}
	else
	{
		if (e->p[1] && e->p[0] > ft_udigitlen(x, 10))
			e->w = (e->w >= e->p[0]) ? e->w - e->p[0] : 0;
		else
			e->w -= (e->w >= ft_udigitlen(x, 10)) ? ft_udigitlen(x, 10) : e->w;
	}
}

void		ft_wcalc0(t_id *e, unsigned long long x)
{
	ft_0(e, x);
	if ((e->fm & 1) == 1 || (e->fm & 2) == 2)
		e->w -= (e->w >= 1) ? 1 : e->w;
	if (e->id[0] == 'o' && (e->fm & 16) == 16 && x != 0)
		e->w -= (e->w >= 1) ? 1 : e->w;
	if (e->id[0] == 'o' && (e->fm & 16) == 16 && e->p[1] \
	&& e->p[0] > ft_udigitlen(x, 8) && x != 0)
		e->p[0] -= (e->p[0] >= 1) ? 1 : e->p[0];
	if ((e->id[0] == 'x' || e->id[0] == 'X' || e->id[0] == 'p') && \
	(e->fm & 16) == 16 && x != 0)
		e->w -= (e->w >= 2) ? 2 : e->w;
}

void		ft_wcalc1(t_id *e, long double x)
{
	e->w -= (e->w >= ft_ld_ldiglen(x, 10.0) + e->p[0]) ? \
	ft_ld_ldiglen(x, 10.0) + e->p[0] : e->w;
	if (!e->p[0] && (e->fm & 16) == 16)
		e->w -= (e->w >= 1) ? 1 : e->w;
	else if (e->p[0])
		e->w -= (e->w >= 1) ? 1 : e->w;
	if (ft_signbit((void *)0, &x) || (e->fm & 1) == 1 || (e->fm & 2) == 2)
		e->w -= (e->w >= 1) ? 1 : e->w;
}
