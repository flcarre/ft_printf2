/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:25:46 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/03 18:25:10 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_prec(unsigned long *i, char *id, t_id *e, unsigned int pos)
{
	if (id[i[0]] != '.')
		return ;
	i[0]++;
	if (id[i[0]] == '*')
	{
		e->w[0] = (e->w[0] != 0) ? pos - 2 : e->w[0];
		e->p[1] = pos - 1;
		i[0]++;
		e->p[1] = (id[i[0] + \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0]))] == '$') ? \
		ft_atoui(id + i[0]) : e->p[1];
		i[0] += (id[i[0] + (unsigned long)ft_udigitlen(ft_atoui(id + i[0]))] \
		== '$') ? (unsigned long)ft_udigitlen(ft_atoui(id + i[0])) + 1 : 0;
	}
	else
	{
		e->p[0] = ft_atoui(id + i[0]);
		i[0] += (e->p[0] != 0) ? \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0])) : 0;
	}
}

static void	ft_width(unsigned long *i, char *id, t_id *e, unsigned int pos)
{
	if (id[i[0]] == '*')
	{
		e->w[1] = pos - 1;
		i[0]++;
		e->w[1] = (id[i[0] + \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0]))] == '$') ? \
		ft_atoui(id + i[0]) : e->w[1];
		i[0] += (id[i[0] + (unsigned long)ft_udigitlen(ft_atoui(id + i[0]))] \
		== '$') ? (unsigned long)ft_udigitlen(ft_atoui(id + i[0])) + 1 : 0;
	}
	else
	{
		e->w[0] = ft_atoui(id + i[0]);
		i[0] += (e->w[0] != 0) ? \
		(unsigned long)ft_udigitlen(ft_atoui(id + i[0])) : 0;
	}
}

static void	ft_pos(unsigned long *i, char *id, t_id *e)
{
	if (ft_atoui(id + i[0]))
	{
		e->pos = (id[i[0] + (unsigned long)ft_udigitlen(ft_atoui(id + i[0]))] \
							== '$') ? ft_atoui(id + i[0]) : e->pos;
		i[0] += (id[i[0] + (unsigned long)ft_udigitlen(ft_atoui(id + i[0]))] \
		== '$') ? (unsigned long)ft_udigitlen(ft_atoui(id + i[0])) + 1 : 0;
	}
}

int			ft_compid(char *id, t_id **list, unsigned long *i)
{
	static unsigned int	pos = 1;
	t_id				*e;

	if (!(e = ft_newid()))
		return (1);
	i[0]++;
	(ft_isid(id[i[0]) == 5) ? ft_iscolor(i, id, e->id) : 0;
	ft_pos(i, id, e);
	while (id[i[0]] && ft_isfm(id[i[0]))
	{
		e->fm |= ft_isfm(id[i[0]);
		i[0]++;
	}
	ft_width(i, id, e, pos);
	ft_prec(i, id, e, pos);
	ft_isflag(id + i[0], e->lm, i);
	e->id[0] = (ft_isid(id[i[0]) && ft_isid(id[i[0]) != 5) ? id[i[0] : '\0';
	ft_enqueueid(list, e);
	i[0] += (ft_isid(id[i[0]]) && ft_isid(id[i[0]]) != 5) ? 1 : 0;
	i[1] = i[0];
	pos++;
	return (0);
}
