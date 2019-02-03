/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_widthprocess.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:22:30 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/03 18:03:53 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_w_widthprocess(t_id *e)
{
	wchar_t			*tmp;
	wchar_t			*s;
	unsigned long	i;

	s = (void *)0;
	tmp = e->ws;
	i = (unsigned long)e->w[0];
	i -= (ft_wstrlen(tmp) > i) ? i : ft_wstrlen(tmp);
	if (!i)
		return ;
	s = ft_wstrnew(i);
	ft_wmemset((void *)s, (int)' ', i);
	e->ws = ft_wstrjoin(s, tmp);
	ft_memdel(&tmp);
	ft_memdel(&s);
}

void		ft_widthprocess(t_id *e)
{
	char			*tmp;
	char			*s;
	unsigned long	i;

	if (!ft_strcmp("l", e->lm) && (e->id[0] == 's' || e->id[0] == 'c'))
	{
		ft_w_widthprocess(e);
		return ;
	}
	s = (void *)0;
	tmp = e->s;
	i = (unsigned long)e->w[0];
	i -= (ft_strlen(tmp) > i) ? i : ft_strlen(tmp);
	if (!i)
		return ;
	s = ft_strnew(i);
	ft_memset((void *)s, (int)' ', i);
	e->s = ft_strjoin(s, e->s);
	ft_memdel(&tmp);
	ft_memdel(&s);
}
