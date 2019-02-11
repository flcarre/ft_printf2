/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputunbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:26:24 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/09 18:12:41 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputunbr_base(unsigned long long n, char *base)
{
	long				i;
	long				r;
	unsigned long		b;

	i = 0;
	b = ft_strlen(base);
	if (x >= (unsigned long long)b)
		((r = ft_iputunbr_base(x / b)) != -1 && (((i += r) > 0) ? i : !i) && \
		(r = ft_iputunbr_base(x % b)) != -1 && (((i += r) > 0) ? i : !i)) ? \
		0 : 0;
	else
		((r = ft_iputchar('0' + x)) != -1 && (i += r)) ? 0 : 0;
	return ((r == -1) ? r : i);
}
