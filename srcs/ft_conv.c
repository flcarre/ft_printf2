/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:32:13 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/03 17:54:51 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_conv_cs(t_id *e)
{
	wchar_t		w[2];
	char		c[2];

	if (e->id[0] != 'c' && e->id[0] != 's')
		return ;
	ft_bzero((void *)c, 2);
	ft_bzero((void *)w, sizeof(int) * 2);
	w[0] = (!ft_strcmp("l", e->lm) && e->id[0] == 'c') ? e->arg.w : w[0];
	c[0] = (!ft_strcmp("", e->lm) && e->id[0] == 'c') ? e->arg.c : c[0];
	e->ws = (!ft_strcmp("l", e->lm) && e->id[0] == 'c') ? ft_wstrdup(w) : 0;
	e->ws = (!ft_strcmp("l", e->lm) && e->id[0] == 's') ? \
	ft_wstrdup(e->arg.wp) : e->ws;
	e->s = (!ft_strcmp("", e->lm) && e->id[0] == 'c') ? ft_strdup(c) : 0;
	e->s = (!ft_strcmp("", e->lm) && e->id[0] == 's') ? \
	ft_wstrdup(e->arg.cp) : e->s;
}

void		ft_conv(t_id *e)
{
	(!ft_strcmp(e->id, "d") || !ft_strcmp(e->id, "i")) ? \
	ft_strjoin(e->s, ft_lltoa((long long)*(e->a))) : 0;
	(!ft_strcmp(e->id, "o")) ? \
	(e->s = ft_ulltoa_base((unsigned long long)*(e->a), "01234567")) : 0;
	(!ft_strcmp(e->id, "u")) ? \
	(e->s = ft_ulltoa((unsigned long long)*(e->a))) : 0;
	(!ft_strcmp(e->id, "x") || !ft_strcmp(e->id, "p")) ? (e->s = \
	ft_ulltoa_base((unsigned long long)*(e->a), "0123456789abcdef")) : 0;
	(!ft_strcmp(e->id, "X")) ? (e->s = \
	ft_ulltoa_base((unsigned long long)*(e->a), "0123456789ABCDEF")) : 0;
	(!ft_strcmp(e->id, "f") && !ft_strcmp(e->lm, "L")) ? (e->s = \
	ft_ldtoa((long double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "e") && !ft_strcmp(e->lm, "L")) ? (e->s = \
	ft_ldtoa((long double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "g") && !ft_strcmp(e->lm, "L")) ? (e->s = \
	ft_ldtoa((long double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "f") && (!ft_strcmp(e->lm, "") || \
	!ft_strcmp(e->lm, "l"))) ? (e->s = ft_dtoa((double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "e") && (!ft_strcmp(e->lm, "") || \
	!ft_strcmp(e->lm, "l"))) ? (e->s = ft_dtoa((double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "g") && (!ft_strcmp(e->lm, "") || \
	!ft_strcmp(e->lm, "l"))) ? (e->s = ft_dtoa((double)*(e->a)) : 0;
	ft_conv_cs(e);
}
