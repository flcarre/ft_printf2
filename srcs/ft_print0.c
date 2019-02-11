/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 07:15:19 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/09 16:45:44 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print0(t_id *e, va_list args)
{
	int			i;
	int			r;

	r = 0;
	i = va_arg(args, int);
	if ((e->fm & 4) != 4)
		r += ft_wprocess0(e, i);
	r += ft_pprocess0(e, i);
	if ((e->fm & 4) == 4)
		r += ft_wprocess0(e, i);
	return (r);
}

int	ft_print1(t_id *e, va_list args)
{
	short		s;
	int			r;

	r = 0;
	s = (short)va_arg(args, int);
	if ((e->fm & 4) != 4)
		r += ft_wprocess0(e, s);
	r += ft_pprocess0(e, s);
	if ((e->fm & 4) == 4)
		r += ft_wprocess0(e, s);
	return (r);
}

int	ft_print2(t_id *e, va_list args)
{
	char		c;
	int			r;

	r = 0;
	c = (char)va_arg(args, int);
	if ((e->fm & 4) != 4)
		r += ft_wprocess0(e, c);
	r += ft_pprocess0(e, c);
	if ((e->fm & 4) == 4)
		r += ft_wprocess0(e, c);
	return (r);
}

int	ft_print3(t_id *e, va_list args)
{
	long		l;
	int			r;

	r = 0;
	l = va_arg(args, long);
	if ((e->fm & 4) != 4)
		r += ft_wprocess0(e, l);
	r += ft_pprocess0(e, l);
	if ((e->fm & 4) == 4)
		r += ft_wprocess0(e, l);
	return (r);
}

int	ft_print4(t_id *e, va_list args)
{
	long long	ll;
	int			r;

	r = 0;
	ll = va_arg(args, long long);
	if ((e->fm & 4) != 4)
		r += ft_wprocess0(e, ll);
	r += ft_pprocess0(e, ll);
	if ((e->fm & 4) == 4)
		r += ft_wprocess0(e, ll);
	return (r);
}
