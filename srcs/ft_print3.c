/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 07:15:19 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/20 20:17:57 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print15(t_id *e, va_list args)
{
	void			*p;
	int				r;
	int				t;

	t = 0;
	r = 0;
	p = va_arg(args, void *);
	ft_wcalc0(e, (unsigned long long)p);
	if ((e->fm & 4) != 4)
		((t = ft_wprocess3(e, (unsigned long long)p)) >= 0) ? (r += t) : 0;
	(t >= 0 && (t = ft_pprocess3(e, (unsigned long long)p)) >= 0) ? \
	(r += t) : 0;
	if ((e->fm & 4) == 4)
		(t >= 0 && (t = ft_wprocess3(e, (unsigned long long)p)) >= 0) ? \
		(r += t) : 0;
	return ((t < 0) ? -1 : r);
}

int	ft_print16(t_id *e, va_list args)
{
	(void)args;
	return (ft_printcolor(e));
}

int	ft_print17(t_id *e, va_list args)
{
	(void)e;
	(void)args;
	return ((int)ft_iputchar('%'));
}
