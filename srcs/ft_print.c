/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:21:37 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 14:33:50 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_print(t_id **e, t_list **t, int *r)
{
	while((*t) || (*e))
	{
		(*r != -1) ? write(1, (*t)->content, (*t)->content_size - 1) : 0;
		*r += (*r != -1) ? (int)((*t)->content_size - 1) : 0;
		ft_memdel((void **)&((*t)->content));
		if (*e && ((*e)->id[0] == 's' || (*e)->id[0] == 'c') \
		&& !ft_strcmp("l", (*e)->lm))
		{
			(*r != -1) ? ft_putwstr((*e)->ws) : 0;
			*r += (*r != -1) ? (int)ft_wstrlen((*e)->ws) : 0;
			ft_memdel((void **)&((*e)->ws));
		}
		else if (*e)
		{
			(*r != -1) ? write(1, (*e)->s, ft_strlen((*e)->s)) : 0;
			*r += (*r != -1) ? (int)ft_strlen((*e)->s) : 0;
			ft_memdel((void **)&((*e)->s));
		}
		t = &((*t)->next);
		e = &((*e)->next);
	}
}
