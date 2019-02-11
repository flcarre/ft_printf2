/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 07:15:19 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/09 16:45:51 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print5(t_id *e, va_list args)
{
	int				w;
	int				r;

	r = 0;
	w = va_arg(args, int);
	if ((e->fm & 4) != 4)
		r += ft_wprocess0(e, w);
	r += ft_pprocess0(e, w);
	if ((e->fm & 4) == 4)
		r += ft_wprocess0(e, w);
	return (r);
}

int	ft_print6(t_id *e, va_list args)
{
	char			*s;
	int				r;

	r = 0;
	s = va_arg(args, char *);
	if ((e->fm & 4) != 4)
		r += ft_wprocess1(e, s);
	r += ft_pprocess1(e, s);
	if ((e->fm & 4) == 4)
		r += ft_wprocess1(e, s);
	return (r);
}

int	ft_print7(t_id *e, va_list args)
{
	wchar_t			*ws;
	int				r;

	r = 0;
	ws = va_arg(args, wchar_t);
	if ((e->fm & 4) != 4)
		r += ft_wprocess2(e, ws);
	r += ft_pprocess2(e, ws);
	if ((e->fm & 4) == 4)
		r += ft_wprocess2(e, ws);
	return (r);
}

int	ft_print8(t_id *e, va_list args)
{
	unsigned int	ui;
	int				r;

	r = 0;
	ui = va_arg(args, unsigned int);
	if ((e->fm & 4) != 4)
		r += ft_wprocess3(e, ui);
	r += ft_pprocess3(e, ui);
	if ((e->fm & 4) == 4)
		r += ft_wprocess3(e, ui);
	return (r);
}

int	ft_print9(t_id *e, va_list args)
{
	unsigned short	us;
	int				r;

	r = 0;
	us = (unsigned short)va_arg(args, unsigned int);
	if ((e->fm & 4) != 4)
		r += ft_wprocess3(e, us);
	r += ft_pprocess3(e, us);
	if ((e->fm & 4) == 4)
		r += ft_wprocess3(e, us);
	return (r);
}
