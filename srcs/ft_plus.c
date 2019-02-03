/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:22:30 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/03 18:46:54 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_plus(t_id *e)
{
	char	*tmp;

	if (!ft_signconv(e->id[0]))
		return ;
	if (e->sign != '-')
	{
		tmp = e->s;
		e->s = ft_strjoin("+", e->s);
		ft_memdel(&tmp);
	}
	else if (e->sign == '-' && e->s[0] != '-')
	{
		tmp = e->s;
		e->s = ft_strjoin("-", e->s);
		ft_memdel(&tmp);
	}
}
