/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 19:08:27 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static t_id	*ft_while(char *fmt, unsigned long *i, t_list **s, t_id **e)
{
	unsigned int	pos;

	pos = 0;
	while (fmt[i[0]])
	{
		(fmt[i[0]] == '%') ? (i[3] = ft_storetolist(fmt, i, s)) : 0;
		(fmt[i[0]] == '%') ? (i[2] = ft_parseid(fmt, e, i, &pos)) : i[0]++;
		(!fmt[i[0]] && !i[3]) ? (i[3] = ft_storetolist(fmt, i, s)) : 0;
		if (i[2] || i[3] || ft_idisnull(*e))
		{
			ft_delid(e);
			ft_lstdel(s, &ft_delcontent);
			return ((void *)0);
		}
	}
	return (*e);
}

t_id		*ft_parse(char *fmt, t_list **s, va_list args)
{
	t_id			*list[2];
	unsigned long	i[4];

	ft_bzero((void *)i, sizeof(unsigned long) * 4);
	list[0] = (void *)0;
	if (!ft_while(fmt, i, s, &list[0]))
		return ((void *)0);
	list[1] = list[0];
	while (list[1])
	{
		ft_getarg(args, list[1]);
		list[1] = list[1]->next;
	}
	return (list[0]);
}
