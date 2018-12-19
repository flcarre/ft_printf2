/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2018/12/19 20:22:59 by flcarre          ###   ########.fr       */
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
		i[0] += ft_compid(format + i[0], &list, &(i + 1));
	}
	return (list);
}
