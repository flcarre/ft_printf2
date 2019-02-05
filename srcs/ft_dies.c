/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dies.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:22:30 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 17:24:13 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dies(t_id *e)
{
	char	*tmp;

	tmp = e->s;
	if (id[0] == 'o')
	{
		e->s = ft_strjoin("0", e->s);
		ft_memdel((void **)&tmp);
	}
	if (id[0] == 'x' || id[0] == 'p')
	{
		e->s = ft_strjoin("0x", e->s);
		ft_memdel((void **)&tmp);
	}
	if (id[0] == 'X')
	{
		e->s = ft_strjoin("0X", e->s);
		ft_memdel((void **)&tmp);
	}
}
