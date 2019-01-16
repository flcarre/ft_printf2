/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:32:13 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/16 21:10:31 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_conv(t_id *e)
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
	(!ft_strcmp(e->id, "f") && ft_strcmp(lm, "L")) ? (e->s = \
	ft_ldtoa((long double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "e") && ft_strcmp(lm, "L")) ? (e->s = \
	ft_ldtoa((long double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "g") && ft_strcmp(lm, "L")) ? (e->s = \
	ft_ldtoa((long double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "f") && (ft_strcmp(lm, "") || ft_strcmp(lm, "l"))) ? \
	(e->s = ft_dtoa((double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "e") && (ft_strcmp(lm, "") || ft_strcmp(lm, "l"))) ? \
	(e->s = ft_dtoa((double)*(e->a)) : 0;
	(!ft_strcmp(e->id, "g") && (ft_strcmp(lm, "") || ft_strcmp(lm, "l"))) ? \
	(e->s = ft_dtoa((double)*(e->a)) : 0;
}
