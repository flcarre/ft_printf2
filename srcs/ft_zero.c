/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:22:30 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/03 17:19:53 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero(t_id *e)
{
	char			*tmp;
	char			*s;
	unsigned long	i;

	if ((e->fm & 4) == 4 || e->id[0] == 'c' || e->id[0] == 's' || \
	(ft_isid(id[0]) == 2 && e->p[0]))
		return ;
	s = (void *)0;
	tmp = e->s;
	i = (unsigned long)e->w[0];
	i -= (ft_strlen(tmp) > i) ? i : ft_strlen(tmp);
	if (!i)
		return ;
	s = ft_strnew(i);
	ft_memset((void *)s, (int)'0', i);
	e->s = ft_strjoin(s, e->s);
	ft_memdel(&tmp);
	ft_memdel(&s);
}
