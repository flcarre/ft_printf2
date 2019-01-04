/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 00:22:45 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 02:34:18 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glo.h"

void	ft_getarg(va_list *args, t_id *e)
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
			return ;
		}
		i++;
	}
	va_end(tmp);
}
