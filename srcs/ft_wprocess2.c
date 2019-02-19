/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wprocess2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:15:30 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/19 15:48:24 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_wprocess2(t_id *e, wchar_t *ws)
{
	long	r[2];

	r[0] = 0;
	if (!s)
	{
		e->w -= (e->w >= ft_strlen("(null)")) ? \
		(unsigned int)ft_strlen("(null)") : e->w;
		r[0] = ((r[1] = ft_iputxchar(' ', e->w)) < 0) ? r[1] : r[0] + r[1];
		return (r[0]);
	}
	if (e->p[1])
		e->w = (e->w >= e->p[0]) ? e->w - e->p[0] : 0;
	else
		e->w -= (e->w >= ft_wstrlen(ws)) ? ft_wstrlen(ws) : e->w;
	r[0] = ((r[1] = ft_iputxchar(' ', e->w)) < 0) ? r[1] : r[0] + r[1];
	return ((int)r[0]);
}
