/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:22:30 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 17:23:58 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_space(t_id *e)
{
	char	*tmp;

	if (!ft_signconv(e->id[0]))
		return ;
	if (e->sign != '-' && (e->fm & 1) != 1)
	{
		tmp = e->s;
		e->s = ft_strjoin(" ", e->s);
		ft_memdel((void **)&tmp);
	}
	else if (e->sign == '-')
	{
		tmp = e->s;
		e->s = ft_strjoin("-", e->s);
		ft_memdel((void **)&tmp);
	}
}
