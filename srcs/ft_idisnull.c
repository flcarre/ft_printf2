/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idisnull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:45:01 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/03 17:16:30 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int											ft_idisnull(t_id *list)
{
	if (!list)
		return (0);
	if (list->next)
		return (ft_idisnull(list->next));
	return ((list->id[0])  ? 0 : 1);
}
