/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:21:37 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 18:19:30 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print(t_id *e, t_list *t)
{
	while(t->content || e->s)
	{
		write(1, t->content, t->content_size - 1);
		write(1, e->s, ft_strlen(e->s));
		t = t->next;
		e = e->next;
	}
}
