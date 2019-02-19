/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcalc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:05:35 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/19 16:55:42 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_wcalc0(t_id *e, unsigned long long x)
{
	if (e->p[1] && e->p[0] > ft_udigitlen(x, 10))
		e->w = (e->w >= e->p[0]) ? e->w - e->p[0] : 0;
	else
		e->w -= (e->w >= ft_udigitlen(x, 10)) ? ft_udigitlen(x, 10) : e->w;
	if ((e->fm & 1) == 1 || (e->fm & 2) == 2)
		e->w -= (e->w >= 1) ? 1 : e->w;
	if (e->id[0] == 'o' && (e->fm & 16) == 16)
		e->w -= (e->w >= 1) ? 1 : e->w;
	if ((e->id[0] == 'x' || e->id[0] == 'X' || e->id[0] == 'p') && \
	(e->fm & 16) == 16)
		e->w -= (e->w >= 2) ? 2 : e->w;
}

void	ft_wcalc1(t_id *e, long double x)
{
	e->w -= (e->w >= ft_ld_ldigitlen(x, 10.0) + e->p[0]) ? \
	ft_ld_ldigitlen(x, 10.0) + e->p[0] : e->w;
	if (!e->p[0] && (e->fm & 16) == 16)
		e->w -= (e->w >= 1) ? 1 : e->w;
	else if (e->p[0])
		e->w -= (e->w >= 1) ? 1 : e->w;
	if (ft_signbit((void *)0, &x) || (e->fm & 1) == 1 || (e->fm & 2) == 2)
		e->w -= (e->w >= 1) ? 1 : e->w;
}
