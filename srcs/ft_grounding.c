/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grounding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:29:52 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 12:36:08 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_grounding(char **str, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	while (n-- && (*str)[i])
		i = ((*str)[i + 1] == '.') ? i + 2 : i + 1;
	if ((*str)[i] && (*str)[i + 1] >= '5')
	{
		while (i > 0 && (*str)[i] == '9')
			(*str)[(i = ((*str)[i - 1] == '.') ? i - 2 : i - 1)] = '0';
		if (!i && (*str)[i] == '9')
		{
			(*str)[i] += 1;
			tmp = *str;
			*str = ft_strjoin("1", *str);
			ft_memdel((void **)&tmp);
		}
		else
			(*str)[i] += 1;
	}
}
