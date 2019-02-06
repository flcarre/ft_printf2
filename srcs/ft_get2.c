/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/06 18:23:54 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get5(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).w = va_arg(arg, wint_t);
	e->a = &((*u).w);
}

void	ft_get6(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).cp = va_arg(arg, char *);
	e->a = (*u).cp;
}

void	ft_get7(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).wp = va_arg(arg, wchar_t *);
	e->a = (*u).wp;
}

void	ft_get8(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ui = va_arg(arg, unsigned int);
	e->a = &((*u).ui);
}

void	ft_get9(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).us = (unsigned short)va_arg(arg, unsigned int);
	e->a = &((*u).us);
}
