/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fm.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:40:01 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 18:01:28 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glo_fm.h"

static void	ft_wcalc_process(t_id *e)
{
	char	*tmp;

	if (e->s[0] == '-')
	{
		tmp = e->s;
		e->sign = '-';
		e->w[0] -= (e->w[0] > 1) ? 1 : e->w[0];
		e->s = ft_strsub(tmp, 1, ft_strlen(tmp) - 1);
		ft_memdel((void **)&tmp);
	}
	else if ((e->fm & 2) == 2 || (e->fm & 1) == 1)
		e->w[0] -= (e->w[0] > 1) ? 1 : e->w[0];
	if (id[0] == 'p' || ((e->fm & 16) == 16) && (id[0] == 'x' || id[0] == 'X'))
		e->w[0] -= (e->w[0] >= 2) ? 2 : e->w[0];
	else if ((e->fm & 16) == 16 && (id[0] == 'o' || \
	id[0] == 'f' || id[0] == 'e'))
		e->w[0] -= (e->w[0] >= 1) ? 1 : e->w[0];
}

void		ft_fm(t_id *e)
{
	int		i;
	char	*tmp

	i = -1;
	if (e->id[0] != 'c' && e->id[0] != 's')
		ft_wcalc_process(e);
	while (++i < 5)
		((e->fm & glo_fm[i].v) == glo_fm[i].v || (id[0] == 'p' && \
		glo_fm[i].v == 16)) ? glo_fm[i].f(e) : 0;
	if (e->sign == '-' && e->s[0] != '-')
	{
		tmp = e->s;
		e->s = ft_strjoin("-", tmp);
		ft_memdel((void **)&tmp);
	}
}
