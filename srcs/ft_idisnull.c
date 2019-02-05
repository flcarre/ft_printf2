/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idisnull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:45:01 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 18:04:55 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_idisnull(t_id *list)
{
	if (!list)
		return (0);
	if (list->next)
		return (ft_idisnull(list->next));
	if ((list->id[0] == '%' && list->pos) || (list->id[0] == '{' && list->pos))
		return (1);
	if ((ft_strcmp("l", list->lm) && ft_strcmp("", list->lm) && \
	ft_strcmp("L", list->lm)) && (list->id[0] == 'e' || list->id[0] == 'f'))
			return (1);
	if ((ft_strcmp("l", list->lm) && ft_strcmp("", list->lm)) && \
	(list->id[0] == 'c' || list->id[0] == 's'))
		return (1);
	if (ft_strcmp("", list->lm) && list->id[0] == 'p')
		return (1);
	return ((list->id[0]) ? 0 : 1);
}
