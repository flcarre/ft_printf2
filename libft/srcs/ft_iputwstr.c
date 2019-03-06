/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:49:10 by lutsiara          #+#    #+#             */
/*   Updated: 2019/03/06 17:11:18 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

long	ft_iputwstr(int *ws)
{
	long	i;
	long	r;

	i = 0;
	if (!ws)
		return (i);
	if ((r = write(1, ws, ft_wstrlen(ws))) != -1)
		i += r;
	else
		return (r);
	return (i);
}
