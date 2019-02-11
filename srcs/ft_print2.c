/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 07:15:19 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/09 16:46:00 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print10(t_id *e, va_list args)
{
	unsigned char		uc;
	int					r;

	r = 0;
	uc = (unsigned char)va_arg(args, unsigned int);
	if ((e->fm & 4) != 4)
		r += ft_wprocess3(e, uc);
	r += ft_pprocess3(e, uc);
	if ((e->fm & 4) == 4)
		r += ft_wprocess3(e, uc);
	return (r);
}

int	ft_print11(t_id *e, va_list args)
{
	unsigned long		ul;
	int					r;

	r = 0;
	ul = va_arg(args, unsigned long);
	if ((e->fm & 4) != 4)
		r += ft_wprocess3(e, ul);
	r += ft_pprocess3(e, ul);
	if ((e->fm & 4) == 4)
		r += ft_wprocess3(e, ul);
	return (r);
}

int	ft_print12(t_id *e, va_list args)
{
	unsigned long long	ull;
	int					r;

	r = 0;
	ull = va_arg(args, unsigned long long);
	if ((e->fm & 4) != 4)
		r += ft_wprocess3(e, ull);
	r += ft_pprocess3(e, ull);
	if ((e->fm & 4) == 4)
		r += ft_wprocess3(e, ull);
	return (r);
}

int	ft_print13(t_id *e, va_list args)
{
	double				d;
	int					r;

	r = 0;
	d = va_arg(args, double);
	if ((e->fm & 4) != 4)
		r += ft_wprocess4(e, d);
	r += ft_pprocess4(e, d);
	if ((e->fm & 4) == 4)
		r += ft_wprocess4(e, d);
	return (r);
}

int	ft_print14(t_id *e, va_list args)
{
	long double			ld;
	int					r;

	r = 0;
	ld = va_arg(args, long double);
	if ((e->fm & 4) != 4)
		r += ft_wprocess4(e, ld);
	r += ft_pprocess4(e, ld);
	if ((e->fm & 4) == 4)
		r += ft_wprocess4(e, ld);
	return (r);
}
