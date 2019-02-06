/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_storetolist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 13:56:55 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 17:18:31 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_storetolist(char *s, unsigned long *i, t_list **str)
{
	t_list	*e;

	if (!(e = ft_lstnew((void *)0, 0)))
		return (1);
	e->content = ft_strsub(s, i[1], i[0] - i[1]);
	e->content_size = ft_strlen((char *)e->content) + 1;
	e->next = (void *)0;
	ft_lstenqueue(str, e);
	// printf("/%s/\n", e->content);
	return (0);
}
