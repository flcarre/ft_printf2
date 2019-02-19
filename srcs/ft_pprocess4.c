/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pprocess4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:22:11 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/19 20:53:38 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_pprocess4(t_id *e, long double x)
{
	long	r[2];

	r[0] = 0;
	if (ft_signbit((void *)0, &x))
		r[0] = ((r[1] = ft_iputchar('-')) < 0) ? r[1] : r[0] + r[1];
	else if ((e->fm & 2) == 2 && (e->fm & 1) != 1)
		r[0] = ((r[1] = ft_iputchar(' ')) < 0) ? r[1] : r[0] + r[1];
	else if ((e->fm & 1) == 1)
		r[0] = ((r[1] = ft_iputchar('+')) < 0) ? r[1] : r[0] + r[1];
	if (r[0] != -1 && (e->fm & 8) == 8 && (e->fm & 4) != 4)
		r[0] = ((r[1] = ft_iputxchar('0', e->w)) < 0) ? r[1] : r[0] + r[1];
	r[0] = (r[1] < 0 || (r[1] = ft_iputldnbr(x, e)) < 0) ? r[1] : r[0] + r[1];
	e->w = ((e->fm & 8) == 8 && (e->fm & 4) != 4) ? 0 : e->w;
	return ((int)r[0]);
}
