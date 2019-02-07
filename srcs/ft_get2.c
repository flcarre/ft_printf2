/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/07 20:55:32 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get5(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	int		w[2];

	ft_bzero((void *)w, 2 * sizeof(int));
	while (i--)
		(*u).w = va_arg(arg, wint_t);
	w[0] = (*u).w;
	e->ws = ft_wstrdup(w);
	return ((e->ws) ? 0 : -1);
}

int		ft_get6(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).cp = va_arg(arg, char *);
	e->s = (e->arg.cp) ? ft_strdup(e->arg.cp) : ft_strdup("(null)");
	return ((e->s) ? 0 : -1);
}

int		ft_get7(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).wp = va_arg(arg, wchar_t *);
	e->ws = (e->arg.wp) ? ft_wstrdup(e->arg.wp) : ft_wstrdup(L"(null)");
	return ((e->ws) ? 0 : -1);
}

int		ft_get8(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ui = va_arg(arg, unsigned int);
	(e->id[0] == 'X') ? (e->s = \
	ft_ulltoa_base((*u).ui, "0123456789ABCDEF")) : 0;
	(e->id[0] == 'x') ? (e->s = \
	ft_ulltoa_base((*u).ui, "0123456789abcdef")) : 0;
	(e->id[0] == 'o') ? (e->s = ft_ulltoa_base((*u).ui, "01234567")) : 0;
	(e->id[0] == 'u') ? (e->s = ft_ulltoa((*u).ui)) : 0;
	return ((e->s) ? 0 : -1);
}

int		ft_get9(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).us = (unsigned short)va_arg(arg, unsigned int);
	(e->id[0] == 'X') ? (e->s = \
	ft_ulltoa_base((*u).uc, "0123456789ABCDEF")) : 0;
	(e->id[0] == 'x') ? (e->s = \
	ft_ulltoa_base((*u).uc, "0123456789abcdef")) : 0;
	(e->id[0] == 'o') ? (e->s = ft_ulltoa_base((*u).uc, "01234567")) : 0;
	(e->id[0] == 'u') ? (e->s = ft_ulltoa((*u).uc)) : 0;
	return ((e->s) ? 0 : -1);
}
