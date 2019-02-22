/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:04:14 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/21 15:58:08 by flcarre          ###   ########.fr       */
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
		else if (*format != '%')
		{
			if (*format && ft_iputchar(*format++) == -1)
				return (-1);
			r++;
		}
	}
	va_end(args);
	return (r);
}
