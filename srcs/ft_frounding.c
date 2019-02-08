/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frounding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:41:20 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/08 05:14:00 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_frounding(char **str, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	while ((*str)[i] && (*str)[i] != '.')
		i++;
	i++;
	while (n-- && (*str)[i])
		i++;
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
