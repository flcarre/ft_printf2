/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:04:14 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/05 21:40:19 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	t_list	*s;
	t_id	*list;
	t_id	*i;
	int		r;

	s = (void *)0;
	va_start(args, format);
	list = ft_parse((char *)format, &s, &args);
	r = (list) ? 0 : -1;
	i = list;
	while (i && r != -1)
	{
		r = (r != -1) ? ft_precprocess(i) : r;
		r = (r != -1) ? ft_fm(i) : r;
		r = (r != -1) ? ft_widthprocess(i) : r;
		i = i->next;
	}
	va_end(args);
	ft_print(list, s, &r);
	ft_delid(&list);
	ft_lstdel(s, &ft_delcontent);
	return (r);
}
