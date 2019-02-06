/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:32:13 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/06 21:35:24 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_conv_cs(t_id *e)
{
	wchar_t		w[2];
	char		c[2];

	if (e->id[0] != 'c' && e->id[0] != 's')
		e->infnan = (!ft_strcmp("inf", e->s) || !ft_strcmp("-inf", e->s) || \
		!ft_strcmp("nan", e->s) || !ft_strcmp("-nan", e->s)) ? 1 : 0;
	if (e->id[0] != 'c' && e->id[0] != 's')
		return ;
	ft_bzero((void *)c, 2);
	ft_bzero((void *)w, sizeof(int) * 2);
	w[0] = (e->lm[0] == 'l' && e->id[0] == 'c') ? e->arg.w : w[0];
	c[0] = (e->lm[0] == '\0' && e->id[0] == 'c') ? e->arg.c : c[0];
	e->ws = (e->lm[0] == 'l' && e->id[0] == 'c') ? ft_wstrdup(w) : 0;
	e->ws = (e->lm[0] == 'l' && e->id[0] == 's') ? \
	ft_wstrdup(e->arg.wp) : e->ws;
	e->s = (e->lm[0] == '\0' && e->id[0] == 'c') ? ft_strdup(c) : 0;
	e->s = (e->arg.cp && e->lm[0] == '\0' && e->id[0] == 's') ? \
	ft_strdup(e->arg.cp) : ft_strdup("(null)");
}

void		ft_conv(t_id *e)
{
	(e->id[0] == '{') ? ft_color(e) : 0;
	(e->id[0] == '%') ? (e->s = ft_strdup("%")) : 0;
	(e->id[0] == 'd' || e->id[0] == 'i') ? \
	(e->s = ft_lltoa(*((long long *)e->a))) : 0;
	(e->id[0] == 'o') ? \
	(e->s = ft_ulltoa_base(*((unsigned long long *)e->a), "01234567")) : 0;
	(e->id[0] == 'u') ? \
	(e->s = ft_ulltoa(*((unsigned long long *)e->a))) : 0;
	(e->id[0] == 'x') ? (e->s = \
	ft_ulltoa_base(*((unsigned long long *)e->a), "0123456789abcdef")) : 0;
	(e->id[0] == 'p') ? (e->s = \
	ft_ulltoa_base((unsigned long long)e->a, "0123456789abcdef")) : 0;
	(e->id[0] == 'X') ? (e->s = \
	ft_ulltoa_base(*((unsigned long long *)e->a), "0123456789ABCDEF")) : 0;
	(e->id[0] == 'f' && e->lm[0] == 'L') ? \
	(e->s = ft_ldtoa(*((long double *)e->a))) : 0;
	(e->id[0] == 'e' && e->lm[0] == 'L') ? \
	(e->s = ft_ldtoa(*((long double *)e->a))) : 0;
	(e->id[0] == 'f' && (e->lm[0] == '\0' || e->lm[0] == 'l')) ? \
	(e->s = ft_ldtoa(*((double *)e->a))) : 0;
	(e->id[0] == 'e' && (e->lm[0] == '\0' || e->lm[0] == 'l')) ? \
	(e->s = ft_ldtoa(*((double *)e->a))) : 0;
	ft_conv_cs(e);
}
