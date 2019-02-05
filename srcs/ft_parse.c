/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 20:28:55 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

t_id		*ft_parse(char *format, t_list **s, va_list *args)
{
	t_id			*list[2];
	unsigned long	i[4];

	ft_bzero((void *)i, sizeof(unsigned long) * 4);
	list[0] = (void *)0;
	while (format[i[0]])
	{
		(format[i[0]] == '%') ? (i[3] = ft_storetolist(format, i, s)) : 0;
		(format[i[0]] == '%') ? (i[2] = ft_parseid(format, &list, i)) : i[0]++;
		if (i[2] || i[3] || ft_idisnull(list[0]))
		{
			ft_delid(&list[0]);
			ft_lstdel(s, &ft_delcontent);
			return ((void *)0);
		}
	}
	list[1] = list[0];
	while (list[1])
	{
		ft_getarg(args, list[1]);
		list[1] = list[1]->next;
	}
	return (list[0]);
}
