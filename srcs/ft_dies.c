/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dies.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:22:30 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/16 21:40:46 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dies(t_id *e)
{
	char *tmp;

	tmp = e->s;
	if (id[0] == 'o')
	{
		e->s = ft_strjoin("0", e->s);
		ft_memdel(&tmp);
	}
	if (id[0] == 'x')
	{
		e->s = ft_strjoin("0x", e->s);
		ft_memdel(&tmp);
	}
	if (id[0] == 'X')
	{
		e->s = ft_strjoin("0X", e->s);
		ft_memdel(&tmp);
	}
	if ((id[0] == 'e' || id[0] == 'f' || id[0] == 'g') && !e->p[0])
	{
		e->s = ft_strjoin(e->s, '.');
		ft_memdel(&tmp);
	}
}
