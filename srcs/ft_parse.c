/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/08 02:56:01 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static t_id	*ft_while(char *fmt, unsigned long *i, t_list **s, t_id **e)
{
	unsigned int	pos[2];

	ft_bzero((void *)pos, 2 * sizeof(unsigned int));
	while (fmt[i[0]])
	{
		(fmt[i[0]] == '%') ? (i[3] = ft_storetolist(fmt, i, s)) : 0;
		(fmt[i[0]] == '%') ? (i[2] = ft_parseid(fmt, e, i, pos)) : i[0]++;
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

t_id		*ft_parse(char *fmt, t_list **s)
{
	t_id			*list;
	unsigned long	i[4];

	ft_bzero((void *)i, sizeof(unsigned long) * 4);
	list = (void *)0;
	if (!ft_while(fmt, i, s, &list))
		return ((void *)0);
	return (list);
}
