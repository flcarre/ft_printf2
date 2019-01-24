/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:46:20 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/24 01:12:17 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trim(char **s)
{
	char	*tmp;
	char	*del;

	tmp = *s + ft_strlen(*s) - 1;
	while (*tmp == '0')
		tmp--;
	tmp++;
	*tmp = '\0';
	tmp = *s;
	while (*tmp == '0' && *(tmp + 1) != '.')
		tmp++;
	del = *s;
	*s = ft_strdup(tmp);
	ft_memdel((void **)&del);
}
