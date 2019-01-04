/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 00:22:45 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 02:28:31 by flcarre          ###   ########.fr       */
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
		if (!ft_strcmp(glo[i].lm, e->lm) && !ft_strcmp(glo[i].id, e->id))
		{
			glo[i].f()
			return ;
		}
	}
	va_end(tmp);
}
