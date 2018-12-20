/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:25:46 by flcarre           #+#    #+#             */
/*   Updated: 2018/12/20 17:45:37 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long					ft_compid(char *id, t_id **list)
{
	static unsigned int	pos = 1;
 	unsigned long				i;
	t_id								*e;

	i = 0;
	e = ft_newid();
	if (ft_atoui(id))
	{

	}
	while (!e->w && id[i] && ft_isfm(id[i]))
	{
		e->fm |= ft_isfm(id[i]);
		i++;
	}
	e->id = (ft_isid(id[i])) ? id[i] : '\0';
	ft_enqueueid(list, e);
	return (i + 1);
}