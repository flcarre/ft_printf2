/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/08 07:03:02 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int			ft_converter(char **fmt, va_list args, int *r)
{
	t_id	e;

	ft_parse(&e, fmt, args);
	if (ft_printarg(&e, args))
		return (1);
	return (0);
}
