/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputnwstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:49:10 by lutsiara          #+#    #+#             */
/*   Updated: 2019/03/06 17:11:30 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

long	ft_iputnwstr(int *ws, unsigned long n)
{
	long	i;
	long	r;

	i = 0;
	if (!ws || !n)
		return (i);
	n = n < ft_wstrlen(ws) ? n : ft_wstrlen(ws);
	if ((r = write(1, ws, n)) != -1)
		i += r;
	else
		return (r);
	return (i);
}
