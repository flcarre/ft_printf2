/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/07 20:55:14 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get0(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).i = va_arg(arg, int);
	e->s = ft_lltoa((*u).i);
	return ((e->s) ? 0 : -1);
}

int		ft_get1(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).s = (short)va_arg(arg, int);
	e->s = ft_lltoa((*u).s);
	return ((e->s) ? 0 : -1);
}

int		ft_get2(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	char	c[2];

	ft_bzero((void *)c, 2);
	while (i--)
		(*u).c = (char)va_arg(arg, int);
	c[0] = (*u).c;
	(e->id[0] == 'i' || e->id[0] == 'd') ? (e->s = ft_lltoa((*u).c)) : 0;
	(e->id[0] == 'c') ? (e->s = ft_strdup(c)) : 0;
	return ((e->s) ? 0 : -1);
}

int		ft_get3(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).l = va_arg(arg, long);
	e->s = ft_lltoa((*u).l);
	return ((e->s) ? 0 : -1);
}

int		ft_get4(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ll = va_arg(arg, long long);
	e->s = ft_lltoa((*u).ll);
	return ((e->s) ? 0 : -1);
}
