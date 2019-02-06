/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:04:14 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/06 18:09:00 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	// printf("1\n");
	va_list	args;
	t_list	*s;
	t_id	*list;
	t_id	*i;
	int		r;

	s = (void *)0;
	// printf("2\n");
	va_start(args, format);
	// printf("3\n");
	list = ft_parse((char *)format, &s, &args);
	// printf("4\n");
	r = (list) ? 0 : -1;
	i = list;
	while (i && r != -1)
	{
		// printf("5\n");
		ft_conv(i);
		// printf("5.1\n");
		r = (r != -1) ? ft_precprocess(i) : r;
		// printf("6\n");
		r = (r != -1) ? ft_fm(i) : r;
		// printf("7\n");
		r = (r != -1) ? ft_widthprocess(i) : r;
		// printf("8\n");
		// printf("\nString e->s\n%s\n", i->s);
		i = i->next;
	}
	// printf("9\n");
	// printf("10\n");
	ft_print(&list, &s, &r);
	// printf("11\n");
	ft_delid(&list);
	// printf("12\n");
	ft_lstdel(&s, &ft_delcontent);
	// printf("13\n");
	va_end(args);
	return (r);
}
