/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:32:13 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/09 18:32:42 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_conv(t_id *e)
{
	char *tmp;

	(!ft_strcmp(e->id, "d") || !ft_strcmp(e->id, "i")) ? \
	ft_strjoin(e->s, ft_lltoa((long long)*(e->a))) : 0;
	(!ft_strcmp(e->id, "o")) ? \
	(e->s = ft_ulltoa_base((unsigned long long)*(e->a), "01234567")) : 0;
	(!ft_strcmp(e->id, "u")) ? \
	(e->s = ft_ulltoa((unsigned long long)*(e->a))) : 0;
	(!ft_strcmp(e->id, "x")) ? (e->s = \
	ft_ulltoa_base((unsigned long long)*(e->a), "0123456789abcdef")) : 0;
	(!ft_strcmp(e->id, "X")) ? (e->s = \
	ft_ulltoa_base((unsigned long long)*(e->a), "0123456789ABCDEF")) : 0;
	if (!ft_strcmp("p", e->id))
	{
		tmp = ft_ulltoa_base((unsigned long long)*(e->a), "0123456789abcdef");
		e->s = ft_strjoin("0x", tmp);
		if (!tmp)
			ft_memdel(e->s);
		ft_memdel(tmp);
	}
}
