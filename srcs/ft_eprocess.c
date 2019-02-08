/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eprocess.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 13:40:14 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/08 01:40:29 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_addsuffixe(t_id *e, int pow, unsigned int i)
{
	char			*tmp;
	char			s[4];
	char			*a;

	ft_bzero((void *)s, 4);
	s[0] = 'e';
	s[1] = (pow) ? '-' : '+';
	s[2] = (i - 1 < 10) ? '0' : s[2];
	tmp = e->s;
	e->s = ft_strjoin(e->s, s);
	ft_memdel((void **)&tmp);
	a = ft_itoa((int)(i - 1));
	tmp = e->s;
	e->s = ft_strjoin(e->s, a);
	ft_memdel((void **)&tmp);
	ft_memdel((void **)&a);
}

static void	ft_addzero(t_id *e, unsigned long x)
{
	char			*tmp;
	char			*s;

	if (e->p[0] > x)
	{
		tmp = e->s;
		s = ft_strnew((unsigned long)e->p[0] - x);
		ft_memset((void *)s, (int)'0', (unsigned long)e->p[0] - x);
		e->s = ft_strjoin(e->s, s);
		ft_memdel((void **)&tmp);
		ft_memdel((void **)&s);
	}
	e->s[e->p[0] + 2] = '\0';
}

static void	ft_movedot(char *s, unsigned int i, unsigned int x)
{
	char			tmp;

	while (i > x)
	{
		tmp = s[i];
		s[i] = s[i - 1];
		s[i - 1] = tmp;
		i--;
	}
	while (i < x)
	{
		tmp = s[i];
		s[i] = s[i + 1];
		s[i + 1] = tmp;
		i++;
	}
}

void		ft_eprocess(t_id *e)
{
	unsigned int	i;
	int				pow;

	pow = 0;
	i = 0;
	while (e->s[i] && e->s[i] != '.')
		i++;
	if (i == 1 && e->s[0] == '0' && e->s[2] && (pow = 1))
	{
		i++;
		while (e->s[i] && e->s[i] == '0')
			i++;
		(e->s[i]) ? ft_movedot(e->s, 1, i) : 0;
		ft_trim(&(e->s));
	}
	else
		ft_movedot(e->s, i, 1);
	if (!e->p[0] && (e->fm & 16) != 16)
		e->s[(i > 1) ? 1 : i] = '\0';
	ft_addzero(e, ft_strlen(e->s) - 2);
	ft_addsuffixe(e, pow, i);
}
