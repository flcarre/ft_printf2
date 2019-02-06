/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:04:14 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/06 21:28:10 by flcarre          ###   ########.fr       */
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

	// printf("1\n");
	s = (void *)0;
	va_start(args, format);
	list = ft_parse((char *)format, &s, args);
	r = (list) ? 0 : -1;
	i = list;
	// printf("2\n");
	while (i && r != -1)
	{
		// printf("2.2\n");
		ft_conv(i);
		// printf("2.3\n");
		r = (r != -1) ? ft_precprocess(i) : r;
		r = (r != -1) ? ft_fm(i) : r;
		r = (r != -1) ? ft_widthprocess(i) : r;
		i = i->next;
	}
	// printf("3\n");

	ft_print(&list, &s, &r);
	ft_delid(&list);
	ft_lstdel(&s, &ft_delcontent);
	va_end(args);
	// printf("4\n");
	return (r);
}
