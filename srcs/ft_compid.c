/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:25:46 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/03 15:28:48 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_compid(char *id, t_id **list, unsigned long *i)
{
	static unsigned int	pos = 1;
	t_id				*e;

	i[0]++;
	e = ft_newid();
	(ft_isid(id[i[0]) == 5) ? ft_iscolor(id + i[0], e->id) : 0;
	if (ft_atoui(id + i[0]))
	{
		e->pos = (id[i[0] + (unsigned long)ft_udigitlen(ft_atoui(id + i[0]))] \
							== '$') ? ft_atoui(id + i[0]) : e->pos;
		i[0] += (unsigned long)ft_udigitlen(ft_atoui(id + i[0])) + 1;
		i[0] += (id[i[0] == '$') ? 1 : 0;
	}
	while (!e->w && id[i[0] && ft_isfm(id[i[0]))
	{
		e->fm |= ft_isfm(id[i[0]);
		i[0]++;
	}
	ft_isflag(id + i[0], e->lm, &i);
	e->id = (ft_isid(id[i[0]) && ft_isid(id[i[0]) != 5) ? id[i[0] : '\0';
	ft_enqueueid(list, e);
	i[1] = i[0] + 1;
}
