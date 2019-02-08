/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glo_print3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 07:15:19 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/08 09:12:11 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print15(t_id *e, va_list args)
{
	void			*p;
	int				r;

	r = 0;
	uc = va_arg(args, void *);
	if ((e->fm & 4) != 4)
		r += ft_wprocess5(e, p);
	r += ft_pprocess5(e, p);
	if ((e->fm & 4) == 4)
		r += ft_wprocess5(e, p);
	return (r);
}

int	ft_print16(t_id *e, va_list args)
{
	int					r;

	r = 0;
	r += ft_colorprocess(e);
	return (r);
}

int	ft_print17(t_id *e, va_list args)
{
	ft_putchar('%');
	return (1);
}
