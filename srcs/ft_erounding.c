/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erounding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:29:52 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 13:05:40 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_erounding(char **str, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	i = 1;
	((*str)[i] == '.') ? i++ : 0; 
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
