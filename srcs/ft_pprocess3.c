/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pprocess3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:22:11 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/19 20:53:01 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_iputfm(t_id *e)
{
	long	r[2];

	r[0] = 0;
	if ((e->fm & 2) == 2 && (e->fm & 1) != 1)
		r[0] = ((r[1] = ft_iputchar(' ')) < 0) ? r[1] : r[0] + r[1];
	else if ((e->fm & 1) == 1)
		r[0] = ((r[1] = ft_iputchar('+')) < 0) ? r[1] : r[0] + r[1];
	if (r[0] != -1 && (e->fm & 16) == 16)
	{
		if (e->id[0] == 'o')
			r[0] = ((r[1] = ft_iputchar('0')) < 0) ? r[1] : r[0] + r[1];
		else if (e->id[0] == 'x' || e->id[0] == 'p')
			r[0] = ((r[1] = ft_iputstr("0x")) < 0) ? r[1] : r[0] + r[1];
		else if (e->id[0] == 'X')
			r[0] = ((r[1] = ft_iputstr("0X")) < 0) ? r[1] : r[0] + r[1];
	}
	if (r[0] != -1 && !e->p[1] && (e->fm & 8) == 8 && (e->fm & 4) != 4)
		r[0] = ((r[1] = ft_iputxchar('0', e->w)) < 0) ? r[1] : r[0] + r[1];
	return ((int)r[0]);
}

static int	ft_2(t_id *e, unsigned long long x)
{
	long	r[2];

	r[0] = 0;
	if (e->id[0] == 'x' || e->id[0] == 'p')
		r[0] = ((r[1] = ft_iputunbr_base(x, "0123456789abcdef")) < 0) \
		? r[1] : r[0] + r[1];
	else if (e->id[0] == 'o')
		r[0] = ((r[1] = ft_iputunbr_base(x, "01234567")) < 0) \
		? r[1] : r[0] + r[1];
	else if (e->id[0] == 'X')
		r[0] = ((r[1] = ft_iputunbr_base(x, "0123456789ABCDEF")) < 0) \
		? r[1] : r[0] + r[1];
	else
		r[0] = ((r[1] = ft_iputunbr_base(x, "0123456789")) < 0) \
		? r[1] : r[0] + r[1];
	return ((int)r[0]);
}

int			ft_pprocess3(t_id *e, unsigned long long x)
{
	long	r[2];

	r[0] = 0;
	r[0] = ((r[1] = ft_iputfm(e)) < 0) ? r[1] : r[0] + r[1];
	if (e->id[0] == 'o' && r[0] != -1 && e->p[1] && \
	e->p[0] > ft_udigitlen(x, 8))
		r[0] = ((r[1] = ft_iputxchar('0', e->p[0] - ft_udigitlen(x, 8))) < 0) \
		? r[1] : r[0] + r[1];
	else if ((e->id[0] == 'x' || e->id[0] == 'p' || e->id[0] == 'X') && \
	r[0] != -1 && e->p[1] && e->p[0] > ft_udigitlen(x, 16))
		r[0] = ((r[1] = ft_iputxchar('0', e->p[0] - ft_udigitlen(x, 16))) < 0) \
		? r[1] : r[0] + r[1];
	else if (r[0] != -1 && e->p[1] && e->p[0] > ft_udigitlen(x, 10))
		r[0] = ((r[1] = ft_iputxchar('0', e->p[0] - ft_udigitlen(x, 10))) < 0) \
		? r[1] : r[0] + r[1];
	if (r[0] != -1)
		r[0] = ((r[1] = ft_2(e, x)) < 0) ? r[1] : r[0] + r[1];
	e->w = ((e->fm & 8) == 8 && (e->fm & 4) != 4 && !e->p[1]) ? 0 : e->w;
	return ((int)r[0]);
}
