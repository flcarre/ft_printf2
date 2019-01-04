/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lmisnull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:45:01 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/03 23:31:48 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_lmisnull(t_id *list)
{
	if (!list)
		return (0);
	if (list->next)
		return (ft_lmisnull(list->next));
	return ((list->lm[0]) ? 0 : 1);
}
