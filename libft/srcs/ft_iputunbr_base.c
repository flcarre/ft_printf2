/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputunbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:26:24 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/13 21:18:05 by lutsiara         ###   ########.fr       */
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
	if (n >= (unsigned long long)b)
		((r = ft_iputunbr_base(n / b, base)) != -1 && ((i += r) > 0 ? i : !i) \
		&& (r = ft_iputunbr_base(n % b, base)) != -1) ? (i += r) : 0;
	else
		((r = ft_iputchar(base[n])) != -1) ? (i += r) : 0;
	return ((r == -1) ? r : i);
}
