/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enqueueid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:24:37 by flcarre           #+#    #+#             */
/*   Updated: 2018/12/20 16:32:00 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_enqueueid(t_id **list, t_id *e)
{
	if (!list)
		return ;
	if (!(*list))
	{
		*list = e;
		return ;
	}
	ft_enqueueid(&(*list)->next, e);
}
