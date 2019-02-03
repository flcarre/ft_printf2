/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parseid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:25:46 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/31 21:47:58 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_prec(unsigned long *i, char *id, t_id *e, unsigned int pos)
{
	if (id[i[0]] != '.' && (e->p[2] = 1))
		return ;
	i[0]++;
	if (id[i[0]] == '*')
	{
		e->w[1] = (e->w[1] != 0) ? pos - 2 : e->w[1];
		e->p[1] = pos - 1;
		i[0]++;
		e->p[1] = (id[i[0] + \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10)] == '$') ? \
		ft_atoui(id + i[0]) : e->p[1];
		i[0] += (id[i[0] + \
			(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10)] == '$') ? \
			(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10) + 1 : 0;
	}
	else
	{
		e->p[0] = ft_atoui(id + i[0]);
		i[0] += (e->p[0] != 0) ? \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10) : 0;
	}
}

static void		ft_width(unsigned long *i, char *id, t_id *e, unsigned int pos)
{
	if (id[i[0]] == '*')
	{
		e->w[1] = pos - 1;
		i[0]++;
		e->w[1] = (id[i[0] + \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10)] == '$') ? \
		ft_atoui(id + i[0]) : e->w[1];
		i[0] += (id[i[0] + \
			(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10)] == '$') ? \
			(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10) + 1 : 0;
	}
	else
	{
		e->w[0] = ft_atoui(id + i[0]);
		i[0] += (e->w[0] != 0) ? \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10) : 0;
	}
}

static void		ft_pos(unsigned long *i, char *id, t_id *e, unsigned int pos)
{
	if (id[i[0] + (unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10)] == '$')
	{
		e->pos = (id[i[0] + \
			(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10)] == '$') ? \
			ft_atoui(id + i[0]) : e->pos;
		i[0] += (id[i[0] + \
			(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10)] == '$') ? \
			(unsigned long)ft_udigitlen(ft_atoui(id + i[0]), 10) + 1 : 0;
	}
	else
		e->pos = pos;
}

unsigned long	ft_compid(char *id, t_id **list, unsigned long *i)
{
	static unsigned int	pos = 0;
	t_id				*e;

	if (!(e = ft_newid()))
		return (1);
	ft_enqueueid(list, e);
	i[0]++;
	(ft_isid(id[i[0]]) == 5) ? ft_iscolor(i, id, e) : \
	(e->id[0] = (ft_isid(id[i[0]]) == 4 && (i[1] = ++i[0])) ? '%' : e->id[0]);
	if (e->id[0])
		return (0);
	pos++;
	ft_pos(i, id, e, pos);
	while (id[i[0]] && ft_isfm(id[i[0]]))
	{
		e->fm |= ft_isfm(id[i[0]]);
		i[0]++;
	}
	ft_width(i, id, e, pos);
	ft_prec(i, id, e, pos);
	ft_lmprocess(id + i[0], e->lm, i);
	e->id[0] = (ft_isid(id[i[0]])) ? id[i[0]] : '\0';
	i[0] += (ft_isid(id[i[0]])) ? 1 : 0;
	i[1] = i[0];
	return (0);
}
