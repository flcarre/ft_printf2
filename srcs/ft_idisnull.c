/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idisnull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:45:01 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/20 14:46:32 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_idisnull(t_id *e)
{
	if (e->id[0] == '%' && (e->lm[0] || e->p[0] || e->w || e->fm))
		return (1);
	if (e->id[0] == '{' && (e->lm[0] || e->p[0] || e->w || e->fm))
		return (1);
	if (e->id[0] == 'f' && ft_strcmp("l", e->lm) && ft_strcmp("", e->lm) && \
	ft_strcmp("L", e->lm))
		return (1);
	if ((e->id[0] == 'c' || e->id[0] == 's') && \
	ft_strcmp("l", e->lm) && ft_strcmp("", e->lm))
		return (1);
	if (e->id[0] == 'p' && ft_strcmp("", e->lm))
		return (1);
	return ((e->id[0]) ? 0 : 1);
}
