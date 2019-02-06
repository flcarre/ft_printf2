/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:21:37 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 18:04:09 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_print(t_id **e, t_list **t, int *r)
{
	while((t || e) && ((*t) || (*e)))
	{
		// printf("1\n");
		(*r != -1 && *t) ? write(1, (*t)->content, (*t)->content_size - 1) : 0;
		// printf("2\n");
		*r += (*r != -1 && *t) ? (int)((*t)->content_size - 1) : 0;
		// printf("3\n");
		ft_memdel((void **)&((*t)->content));
		// printf("4\n");
		if (*e && ((*e)->id[0] == 's' || (*e)->id[0] == 'c') \
		&& !ft_strcmp("l", (*e)->lm))
		{
			// printf("5\n");
			(*r != -1) ? ft_putwstr((*e)->ws) : 0;
			// printf("6\n");
			*r += (*r != -1) ? (int)ft_wstrlen((*e)->ws) : 0;
			// printf("7\n");
			ft_memdel((void **)&((*e)->ws));
		}
		else if (e && *e)
		{
			// printf("8\n");
			(*r != -1) ? write(1, (*e)->s, ft_strlen((*e)->s)) : 0;
			// printf("9\n");
			*r += (*r != -1) ? (int)ft_strlen((*e)->s) : 0;
			// printf("10\n");
			ft_memdel((void **)&((*e)->s));
			// printf("11\n");
		}
		// printf("12\n");
		t = (t && *t) ? &((*t)->next) : (t_list **)0;
		// printf("13\n");
		e = (e && *e) ? &((*e)->next) : (t_id **)0;
		// printf("\n14\n");
		// printf("\n%p\n", e);
		// printf("\n%p\n", t);
		if (!e)
			return ;
	}
	// printf("15\n");

}
