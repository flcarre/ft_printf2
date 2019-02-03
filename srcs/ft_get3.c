/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/30 22:08:01 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get10(va_list *arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).uc = (unsigned char)va_arg(*arg, unsigned int);
	e->a = &((*u).uc);
}

void	ft_get11(va_list *arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ul = va_arg(*arg, unsigned long);
	e->a = &((*u).ul);
}

void	ft_get12(va_list *arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ull = va_arg(*arg, unsigned long long);
	e->a = &((*u).ull);
}

void	ft_get13(va_list *arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).d = va_arg(*arg, double);
	e->a = &((*u).d);
}

void	ft_get14(va_list *arg, unsigned int i, t_var *u, t_id *e)
{
	while (i--)
		(*u).ld = va_arg(*arg, long double);
	e->a = &((*u).ld);
}
