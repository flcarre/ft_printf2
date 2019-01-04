/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 01:49:52 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get10(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).uc = va_arg(arg, unsigned char);
}

void	ft_get11(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).ul = va_arg(arg, unsigned long);
}

void	ft_get12(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).ull = va_arg(arg, unsigned long long);
}

void	ft_get13(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).d = va_arg(arg, double);
}

void	ft_get14(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).ld = va_arg(arg, long double);
}
