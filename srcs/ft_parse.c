/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 00:37:12 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

t_id		*ft_parse(char *format, t_list **str, va_list *args)
{
	t_id			*list;
	unsigned long	i[2];
	int				r;

	(void)args;
	i[0] = 0;
	i[1] = 0;
	r = 0;
	list = (void *)0;
	while (format[i[0]])
	{
		(format[i[0]] == '%') ? ft_storetolist(format, i, str) : 0;
		(format[i[0]] == '%') ? (r = ft_compid(format, &list, i)) : i[0]++;
		if (ft_idisnull(list) || ft_lmisnull(list) || r)
		{
			ft_delid(&list);
			ft_lstdel(str, &ft_delcontent);
			return ((void *)0);
		}
	}

	/*
	t_list	*l;
	t_id 	*m;
	l = *str;
	m = list;
	while (l)
	{
		printf("%s\n", l->content);
		printf("pos = %d\nfm = %d\nw0 = %d\nw1 = %d\np0 = %d\np1 = %d\nlm = %s\nid = %s\n\n\n", m->pos, m->fm, m->w[0], m->w[1], m->p[0], m->p[1], m->lm, m->id);
		l = l->next;
		m = m->next;
	}*/
	return (list);
}
