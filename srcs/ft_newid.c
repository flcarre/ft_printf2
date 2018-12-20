/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:12:52 by flcarre           #+#    #+#             */
/*   Updated: 2018/12/20 16:24:59 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_id		*ft_newid(void)
{
	t_id *new;

	if (!(new = (t_id *)ft_memalloc(sizeof(t_id))))
		return ((void *)0);
	new->pos = 0;
	new->fm = 0;
	new->w = 0;
	new->p = 0;
	new->id = 0;
	arg.i = 0;
	new->next = (void *)0;
	new->sid[0].pos = 0;
	new->sid[0].op = 0;
	new->sid[1].pos = 0;
	new->sid[1].op = 0;
	return (new);
}
