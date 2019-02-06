/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precprocess.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:32:41 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 15:25:01 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_toggleminus(t_id *e)
{
	char			*tmp;

	// printf("2.1\n");
	// printf("%s\n", e->s);
	if (e->s[0] == '-' && e->id[0] != 's')
	{
		// printf("2.2\n");
		tmp = e->s;
		e->sign = '-';
		// printf("2.3\n");
		e->s = ft_strsub(tmp, 1, ft_strlen(tmp) - 1);
		// printf("2.4\n");
		ft_memdel((void **)&tmp);
		// printf("2.5\n");
	}
	else if (e->sign == '-')
	{
		// printf("2.6\n");
		tmp = e->s;
		// printf("2.7\n");
		e->s = ft_strjoin("-", tmp);
		// printf("2.8\n");
		ft_memdel((void **)&tmp);
		// printf("2.9\n");
		e->sign = '\0';
	}
	// printf("2.10\n");
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
	// printf("1.1\n");
	unsigned int	i;

	i = 0;
	if (e->id[0] == 'c' || e->id[0] == 'p' || e->infnan)
		return (0);
	// printf("1.1.1\n");
	if (ft_toggleminus(e))
		return (-1);
	// printf("1.2\n");
	if (ft_isid(e->id[0]) == 2)
		ft_precdiouxx(e);
	// printf("1.3\n");
	if (e->id[0] == 'f')
		ft_precf(e);
	// printf("1.4\n");
	if (e->id[0] == 'e')
	{
		ft_erounding(&(e->s), e->p[0]);
		ft_eprocess(e);
	}
	// printf("1.5\n");
	if (e->id[0] == 's')
		ft_precs(e);
	// printf("1.6\n");
	ft_toggleminus(e);
	// printf("1.7\n");
	if (e->id[0] == 's' && e->lm[0] == 'l')
		return ((e->ws) ? 0 : -1);
	// printf("1.8\n");
	return ((e->s) ? 0 : -1);
}
