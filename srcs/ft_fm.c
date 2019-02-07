/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fm.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:40:01 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/07 17:00:08 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glo_fm.h"

static int	ft_wcalc_process(t_id *e)
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
	if (e->id[0] == 'p' || \
	((e->fm & 16) == 16 && (e->id[0] == 'x' || e->id[0] == 'X')))
		e->w[0] -= (e->w[0] >= 2) ? 2 : e->w[0];
	else if ((e->fm & 16) == 16 && (e->id[0] == 'o' || \
	e->id[0] == 'f' || e->id[0] == 'e'))
		e->w[0] -= (e->w[0] >= 1) ? 1 : e->w[0];
	if ((e->id[0] == 's' || e->id[0] == 'c') && e->lm[0] == 'l')
		return ((e->ws) ? 0 : -1);
	return ((e->s) ? 0 : -1);
}

int			ft_fm(t_id *e)
{
	int		i[2];
	char	*tmp;

	i[0] = -1;
	i[1] = 0;
	if (e->id[0] != 'c' && e->id[0] != 's')
		i[1] = ft_wcalc_process(e);
	while (++i[0] < 5 && i[1] != -1)
	{
		((e->fm & glo_fm[i[0]].v) == glo_fm[i[0]].v || (e->id[0] == 'p' && \
		glo_fm[i[0]].v == 16)) ? glo_fm[i[0]].f(e) : 0;
		if ((e->id[0] == 's' || e->id[0] == 'c') && e->lm[0] == 'l')
			i[1] = (e->ws) ? 0 : -1;
		else
			i[1] = (e->s) ? 0 : -1;
	}
	if (i[1] != -1 && e->sign == '-' && e->s[0] != '-')
	{
		tmp = e->s;
		e->s = ft_strjoin("-", tmp);
		ft_memdel((void **)&tmp);
	}
	printf("%u\n", e->w[0]);
	if ((e->id[0] == 's' || e->id[0] == 'c') && e->lm[0] == 'l')
		return ((e->ws) ? 0 : -1);
	return ((e->s) ? 0 : -1);
}
