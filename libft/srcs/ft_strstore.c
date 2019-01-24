/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstore.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:46:18 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/23 18:07:30 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strstore(char **a, char *s, unsigned long n)
{
	char			*tmp;
	unsigned long	i;
	unsigned long	len;

	len = (*a) ? ft_strlen(*a) : 0;
	tmp = *a;
	if (!(*a = ft_strnew(len + n)))
		return ;
	i = 0;
	while (tmp && tmp[i])
	{
		(*a)[i] = tmp[i];
		i++;
	}
	ft_memdel((void **)&tmp);
	while (n--)
		(*a)[i++] = *(s++);
	(*a)[i] = '\0';
}
