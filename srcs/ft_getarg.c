/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 00:22:45 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 18:22:40 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glo_get.h"

static void	ft_getx(va_list arg, t_id *e, char m)
{
	unsigned int	*x;
	unsigned int	i;
	int				y;

	i = (m) ? e->p[1] : e->w[1];
	x = (m) ? e->p : e->w;
	while (i--)
		y = va_arg(arg, int);
	e->fm |= (y < 0 && !m) ? 4 : 0;
	(!m) ? (*x = (y < 0) ? -y : y) : (*x = (y < 0) ? 6 : y);
}

static void	ft_get_wp(va_list arg, t_id *e)
{
	va_list			tmp;

	if (e->w[1])
	{
		va_copy(tmp, arg);
		ft_getx(tmp, e, 0);
		va_end(tmp);
	}
	if (e->p[1])
	{
		va_copy(tmp, arg);
		ft_getx(tmp, e, 1);
		va_end(tmp);
	}
	else if (!(e->p[0]) && (!ft_strcmp(e->id, "f") || !ft_strcmp(e->id, "e")))
		e->p[0] = (e->p[2]) ? 6 : e->p[0];
}

static void	ft_get(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).p = va_arg(arg, void *);
	e->a = (*u).p;
 }

void		ft_getarg(va_list args, t_id *e)
{
	va_list			tmp;
	int				i;

	i = -1;
	va_copy(tmp, args);
	while (++i < 40)
	{
		if (!ft_strcmp(glo_get[i].lm, e->lm) && !ft_strcmp(glo_get[i].id, e->id))
		{
			glo_get[i].f(tmp, e->pos, &(e->arg), e);
			va_end(tmp);
			return ;
		}
	}
	if (!ft_strcmp("", e->lm) && !ft_strcmp("p", e->id))
		ft_get(tmp, e->pos, &(e->arg), e);
	ft_get_wp(args, e);
	va_end(tmp);
}
