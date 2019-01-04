/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 01:35:36 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 02:44:16 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get5(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).w = va_arg(*arg, wint_t);
}

void	ft_get6(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).cp = va_arg(*arg, char *);
}

void	ft_get7(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).wp = va_arg(*arg, wchar_t *);
}

void	ft_get8(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).ui = va_arg(*arg, unsigned int);
}

void	ft_get9(va_list *arg, unsigned int i, t_var *u)
{
	while (i--)
		(*u).us = (unsigned short)va_arg(*arg, unsigned int);
}
