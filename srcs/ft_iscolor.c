/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscolor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 14:57:49 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/03 21:30:37 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_iscolor(unsigned long *i, char *s, t_id *e)
{
	int	j;

	j = 0;
	if (!ft_strchr(s + i[0], (int)'}'))
		return ;
	while(s[i[0]] && s[i[0]] != '}')
	{
		e->id[j] = s[i[0]];
		j++;
		i[0]++;
	}
	e->id[j] = s[i[0]];
	i[0] += (s[i[0]] == '}') ? 1 : 0;
	i[1] = i[0];
}