/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/07 20:52:48 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get10(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).uc = (unsigned char)va_arg(arg, unsigned int);
	(e->id[0] == 'X') ? (e->s = \
	ft_ulltoa_base((*u).uc, "0123456789ABCDEF")) : 0;
	(e->id[0] == 'x') ? (e->s = \
	ft_ulltoa_base((*u).uc, "0123456789abcdef")) : 0;
	(e->id[0] == 'o') ? (e->s = ft_ulltoa_base((*u).uc, "01234567")) : 0;
	(e->id[0] == 'u') ? (e->s = ft_ulltoa((*u).uc)) : 0;
	return ((e->s) ? 0 : -1);
}

int		ft_get11(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ul = va_arg(arg, unsigned long);
	(e->id[0] == 'X') ? (e->s = \
	ft_ulltoa_base((*u).ul, "0123456789ABCDEF")) : 0;
	(e->id[0] == 'x') ? (e->s = \
	ft_ulltoa_base((*u).ul, "0123456789abcdef")) : 0;
	(e->id[0] == 'o') ? (e->s = ft_ulltoa_base((*u).ul, "01234567")) : 0;
	(e->id[0] == 'u') ? (e->s = ft_ulltoa((*u).ul)) : 0;
	return ((e->s) ? 0 : -1);
}

int		ft_get12(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ull = va_arg(arg, unsigned long long);
	(e->id[0] == 'X') ? (e->s = \
	ft_ulltoa_base((*u).ull, "0123456789ABCDEF")) : 0;
	(e->id[0] == 'x') ? (e->s = \
	ft_ulltoa_base((*u).ull, "0123456789abcdef")) : 0;
	(e->id[0] == 'o') ? (e->s = ft_ulltoa_base((*u).ull, "01234567")) : 0;
	(e->id[0] == 'u') ? (e->s = ft_ulltoa((*u).ull)) : 0;
	return ((e->s) ? 0 : -1);
}

int		ft_get13(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).d = va_arg(arg, double);
	e->s = ft_dtoa((*u).d);
	e->infnan = (!ft_strcmp("inf", e->s) || !ft_strcmp("-inf", e->s) || \
	!ft_strcmp("nan", e->s) || !ft_strcmp("-nan", e->s)) ? 1 : 0;
	return ((e->s) ? 0 : -1);
}

int		ft_get14(va_list arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ld = va_arg(arg, long double);
	e->s = ft_ldtoa((*u).ld);
	e->infnan = (!ft_strcmp("inf", e->s) || !ft_strcmp("-inf", e->s) || \
	!ft_strcmp("nan", e->s) || !ft_strcmp("-nan", e->s)) ? 1 : 0;
	return ((e->s) ? 0 : -1);
}
