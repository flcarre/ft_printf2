/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 07:15:19 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/11 22:56:20 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print10(t_id *e, va_list args)
{
	unsigned char		uc;
	int					r;
	int					t;

	t = 0;
	r = 0;
	uc = (unsigned char)va_arg(args, unsigned int);
	if ((e->fm & 4) != 4)
		r = ((t = ft_wprocess3(e, uc)) < 0) ? t : r + t;
	r = (t >= 0 && (t = ft_pprocess3(e, uc)) >= 0) ? r + t : t;
	if ((e->fm & 4) == 4)
		r = (t >= 0 && (t = ft_wprocess3(e, uc)) >= 0) ? r + t : t;
	return (r);
}

int	ft_print11(t_id *e, va_list args)
{
	unsigned long		ul;
	int					r;
	int					t;

	t = 0;
	r = 0;
	ul = va_arg(args, unsigned long);
	if ((e->fm & 4) != 4)
		r = ((t = ft_wprocess3(e, ul)) < 0) ? t : r + t;
	r = (t >= 0 && (t = ft_pprocess3(e, ul)) >= 0) ? r + t : t;
	if ((e->fm & 4) == 4)
		r = (t >= 0 && (t = ft_wprocess3(e, ul)) >= 0) ? r + t : t;
	return (r);
}

int	ft_print12(t_id *e, va_list args)
{
	unsigned long long	ull;
	int					r;
	int					t;

	t = 0;
	r = 0;
	ull = va_arg(args, unsigned long long);
	if ((e->fm & 4) != 4)
		r = ((t = ft_wprocess3(e, ull)) < 0) ? t : r + t;
	r = (t >= 0 && (t = ft_pprocess3(e, ull)) >= 0) ? r + t : t;
	if ((e->fm & 4) == 4)
		r = (t >= 0 && (t = ft_wprocess3(e, ull)) >= 0) ? r + t : t;
	return (r);
}

int	ft_print13(t_id *e, va_list args)
{
	double				d;
	int					r;
	int					t;

	t = 0;
	r = 0;
	d = va_arg(args, double);
	if ((e->fm & 4) != 4)
		r = ((t = ft_wprocess4(e, d)) < 0) ? t : r + t;
	r = (t >= 0 && (t = ft_pprocess4(e, d)) >= 0) ? r + t : t;
	if ((e->fm & 4) == 4)
		r = (t >= 0 && (t = ft_wprocess4(e, d)) >= 0) ? r + t : t;
	return (r);
}

int	ft_print14(t_id *e, va_list args)
{
	long double			ld;
	int					r;
	int					t;

	t = 0;
	r = 0;
	ld = va_arg(args, long double);
	if ((e->fm & 4) != 4)
		r = ((t = ft_wprocess4(e, ld)) < 0) ? t : r + t;
	r = (t >= 0 && (t = ft_pprocess4(e, ld)) >= 0) ? r + t : t;
	if ((e->fm & 4) == 4)
		r = (t >= 0 && (t = ft_wprocess4(e, ld)) >= 0) ? r + t : t;
	return (r);
}
