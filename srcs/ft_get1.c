/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 02:44:03 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get0(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).i = va_arg(*arg, int);
}

void	ft_get1(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).s = (short)va_arg(*arg, int);
}

void	ft_get2(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).c = (char)va_arg(*arg, int);
}

void	ft_get3(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).l = va_arg(*arg, long);
}

void	ft_get4(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).ll = va_arg(*arg, long long);
}
