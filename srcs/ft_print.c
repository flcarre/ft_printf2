/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:21:37 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 19:15:32 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_print(t_id **e, t_list **t, int *r)
{
	while((t || e) && ((*t) || (*e)))
	{
		(t && *t && *r != -1) ? \
		write(1, (*t)->content, (*t)->content_size - 1) : 0;
		*r += (t && *t && *r != -1) ? (int)((*t)->content_size - 1) : 0;
		(t) ? ft_memdel((void **)&((*t)->content)) : 0;
		if (e && *e && ((*e)->id[0] == 's' || (*e)->id[0] == 'c') && \
		!ft_strcmp("l", (*e)->lm))
		{
			(*r != -1) ? ft_putwstr((*e)->ws) : 0;
			*r += (*r != -1) ? (int)ft_wstrlen((*e)->ws) : 0;
			ft_memdel((void **)&((*e)->ws));
		}
		else if (e && *e)
		{
			(*r != -1) ? write(1, (*e)->s, ft_strlen((*e)->s)) : 0;
			*r += (*r != -1) ? (int)ft_strlen((*e)->s) : 0;
			ft_memdel((void **)&((*e)->s));
		}
		t = (t && *t) ? &((*t)->next) : (t_list **)0;
		e = (e && *e) ? &((*e)->next) : (t_id **)0;
		(!e && *t) ? ft_memdel((void **)&((*t)->content)) : 0;
		if (!e)
			return ;
	}
}
