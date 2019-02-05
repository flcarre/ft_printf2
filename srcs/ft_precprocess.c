/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precprocess.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:32:41 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 12:56:48 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_precf(t_id *e)
{
	unsigned int	i;
	unsigned int	j;
	char			*tmp;
	char			*s;

	i = 0;
	ft_floatstrround(&(e->s), e->p[0]);
	while (e->s[i] && e->s[i] != '.')
		i++;
	j = e->p[0];
	if (!j && (e->fm & 16) != 16)
		e->s[i] = '\0';
	while (e->s[i] && ((j >= 1) ? j-- : j))
		i++;
	if (j)
	{
		tmp = e->s;
		s = ft_strnew(j);
		ft_memset((void *)s, (int)'0', (unsigned long)j);
		e->s = ft_strjoin(e->s, s);
		ft_memdel(&tmp);
		ft_memdel(&s);
	}
	else if (e->s[i])
		e->s[i + 1] = '\0';
}

static void	ft_precdiouxx(t_id *e)
{
	char			*tmp;
	char			*s;
	unsigned long	i;

	s = (void *)0;
	tmp = e->s;
	i = (unsigned long)e->p[0];
	i -= (ft_strlen(tmp) > i) ? i : ft_strlen(tmp);
	if (!i)
		return ;
	s = ft_strnew(i);
	ft_memset((void *)s, (int)'0', i);
	e->s = ft_strjoin(s, e->s);
	ft_memdel(&tmp);
	ft_memdel(&s);
}

void		ft_precprocess(t_id *e)
{
	unsigned int	i;

	i = 0;
	if (e->id[0] == 'c' || e->id[0] == 'p' || e->infnan)
		return ;
	if (ft_isid(e->id[0]) == 2)
		ft_precdiouxx(e);
	if (e->id[0] == 'g')
	{
		ft_grounding(&(e->s), e->p[0]);
		ft_gprocess(e);
	}
	if (e->id[0] == 'f')
		ft_precf(e);
	if (e->id[0] == 'e')
	{
		ft_erounding(&(e->s), e->p[0]);
		ft_eprocess(e);
	}
	if (e->id[0] == 's')
	{
		while (e->s[i] && i <= e->p[0])
			i++;
		e->s[i] = '\0';
	}
}
