/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 00:22:45 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/08 16:48:00 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glo.h"

static void	ft_get(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).p = va_arg(*arg, void *);
}

void		ft_getarg(va_list *args, t_id *e)
{
	va_list	tmp;
	int		i;

	i = 0;
	va_copy(tmp, *args);
	while (i < 40)
	{
		if (!ft_strcmp(glo_get[i].lm, e->lm) && !ft_strcmp(glo_get[i].id, e->id))
		{
			glo_get[i].f(&tmp, e->pos, &(e->arg));
			va_end(tmp);
			return ;
		}
		i++;
	}
	if (!ft_strcmp("", e->lm) && !ft_strcmp("p", e->id))
		ft_get(&tmp, e->pos, &(e->arg));
	va_end(tmp);
}
