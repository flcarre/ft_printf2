/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:17:57 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/03 20:37:19 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_ieee.h"

char		*ft_ldtoa(long double x)
{
	char			*a;
	// char			*p;
	unsigned int	i;
	t_u_ieee_ld		u;

	a = (void *)0;
	i = ft_ld_ldiglen(x, 10.0L);
	u.ld = x;
	return (a);
}
