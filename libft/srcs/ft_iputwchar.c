/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputwchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:42:17 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/09 17:36:31 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_iputwchar(int wc)
{
	char	c[5];

	ft_bzero((void *)c, 5);
	if (wc <= 0x7F)
		c[0] = (char)wc;
	else if (wc <= 0x7FF)
	{
		c[0] = (wc >> 6) + 0xC0;
		c[1] = (wc & 0x3F) + 0x80;
	}
	else if (wc <= 0xFFFF)
	{
		c[0] = (wc >> 12) + 0xE0;
		c[1] = ((wc >> 6) & 0x3F) + 0x80;
		c[2] = (wc & 0x3F) + 0x80;
	}
	else
	{
		c[0] = (wc >> 18) + 0xF0;
		c[1] = ((wc >> 12) & 0x3F) + 0x80;
		c[2] = ((wc >> 6) & 0x3F) + 0x80;
		c[3] = (wc & 0x3F) + 0x80;
	}
	return ((ft_iputstr(c) >> 63) ? -1 : 1);
}
