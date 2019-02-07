/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/07 16:33:15 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get0(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).i = va_arg(arg, int);
	e->a = &((*u).i);
}

void	ft_get1(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).s = (short)va_arg(arg, int);
	e->a = &((*u).s);
}

void	ft_get2(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).c = (char)va_arg(arg, int);
	e->a = &((*u).c);
}

void	ft_get3(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).l = va_arg(arg, long);
	e->a = &((*u).l);
}

void	ft_get4(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ll = va_arg(arg, long long);
	e->a = &((*u).ll);
}
