/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precprocess.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:32:41 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 14:12:25 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_toggleminus(t_id *e)
{
	char			*tmp;

	if (e->s[0] == '-' && e->id[0] != 's')
	{
		tmp = e->s;
		e->sign = '-';
		e->s = ft_strsub(tmp, 1, ft_strlen(tmp) - 1);
		ft_memdel((void **)&tmp);
	}
	else if (e->sign == '-')
	{
		tmp = e->s;
		e->s = ft_strjoin("-", tmp);
		ft_memdel((void **)&tmp);
		e->sign = '\0';
	}
	return ((e->s) ? 0 : 1);
}

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
	while (e->s[++i] && ((j >= 1) ? j-- : j))
		;
	if (j)
	{
		tmp = e->s;
		s = ft_strnew(j);
		ft_memset((void *)s, (int)'0', (unsigned long)j);
		e->s = ft_strjoin(e->s, s);
		ft_memdel((void **)&tmp);
		ft_memdel((void **)&s);
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
	ft_memdel((void **)&tmp);
	ft_memdel((void **)&s);
}

static void	ft_precs(t_id *e)
{
	unsigned int	i;

	i = 0;
	if (e->lm[0] == 'l')
	{
		while (e->ws[i] && i <= e->p[0])
			i++;
		e->ws[i] = L'\0';
	}
	else
	{
		while (e->s[i] && i <= e->p[0])
			i++;
		e->s[i] = '\0';
	}
}

int			ft_precprocess(t_id *e)
{
	unsigned int	i;

	i = 0;
	if (e->id[0] == 'c' || e->id[0] == 'p' || e->infnan)
		return (0);
	if (ft_toggleminus(e))
		return (-1);
	if (ft_isid(e->id[0]) == 2)
		ft_precdiouxx(e);
	if (e->id[0] == 'f')
		ft_precf(e);
	if (e->id[0] == 'e')
	{
		ft_erounding(&(e->s), e->p[0]);
		ft_eprocess(e);
	}
	if (e->id[0] == 's')
		ft_precs(e);
	ft_toggleminus(e);
	if (e->id[0] == 's' && e->lm[0] == 'l')
		return ((e->ws) ? 0 : -1);
	return ((e->s) ? 0 : -1);
}
