/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:04:14 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/08 06:41:09 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	int		r;

	r = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && ft_converter((char **)&format, args, &r))
			return (-1);
		else
		{
			ft_putchar(*format++);
			r++;
		}
	}
	va_end(args);
	return (r);
}
