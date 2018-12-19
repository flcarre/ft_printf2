/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:04:14 by lutsiara          #+#    #+#             */
/*   Updated: 2018/12/19 18:54:14 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	t_list	*str;
	t_id		*list;

	str = (void *)0;
	va_start(args, format);
	list = ft_parse(format, &str, &args);
	va_end(args);
	return ((int)ft_strlen(format));
}
