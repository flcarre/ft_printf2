/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2018/12/20 22:07:54 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_id		*ft_parse(char *format, t_list **str, va_list *args)
{
	t_id					*list;
	unsigned long	i[2];

	i[0] = 0;
	i[1] = 0;
	list = (void *)0;
	while (format[i[0]])
	{
		if (format[i[0]] == '%')
			ft_storetolist(format, i, str);
		ft_compid(format, &list, i);
		if (ft_idisnull(list) || ft_lmisnull(list))
		{
			ft_delid(&list);
			return ((void *));
		}

	}
	return (list);
}
