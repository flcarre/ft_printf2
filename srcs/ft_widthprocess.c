/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_widthprocess.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:22:30 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/07 22:25:24 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_wrestore(t_id *e)
{
	if ((e->fm & 2) == 2 || (e->fm & 1) == 1)
		e->w[0] += 1;
	if (e->id[0] == 'p' || \
	((e->fm & 16) == 16 && (e->id[0] == 'x' || e->id[0] == 'X')))
		e->w[0] += 2;
	else if ((e->fm & 16) == 16 && (e->id[0] == 'o' || \
	e->id[0] == 'f' || e->id[0] == 'e'))
		e->w[0] += 1;
}

static int	ft_w_widthprocess(t_id *e)
{
	wchar_t			*tmp;
	wchar_t			*s;
	unsigned long	i;

	s = (void *)0;
	tmp = e->ws;
	i = (unsigned long)e->w[0];
	i -= (ft_wstrlen(tmp) > i) ? i : ft_wstrlen(tmp);
	if (!i)
		return (0);
	s = ft_wstrnew(i);
	ft_wmemset((void *)s, (int)' ', i);
	e->ws = ft_wstrjoin(s, tmp);
	ft_memdel((void **)&tmp);
	ft_memdel((void **)&s);
	return ((e->ws) ? 0 : -1);
}

int			ft_widthprocess(t_id *e)
{
	char			*tmp;
	char			*s;
	unsigned long	i;

	if ((e->fm & 4) != 4)
		ft_wrestore(e);
	if (e->lm[0] == 'l' && (e->id[0] == 's' || e->id[0] == 'c'))
		return (ft_w_widthprocess(e));
	s = (void *)0;
	tmp = e->s;
	i = (unsigned long)e->w[0];
	i -= (ft_strlen(tmp) > i) ? i : ft_strlen(tmp);
	if (!i)
		return (0);
	s = ft_strnew(i);
	ft_memset((void *)s, (int)' ', i);
	e->s = ft_strjoin(s, e->s);
	ft_memdel((void **)&tmp);
	ft_memdel((void **)&s);
	return ((e->s) ? 0 : -1);
}
