/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_ldiglen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:04:46 by lutsiara          #+#    #+#             */
/*   Updated: 2018/12/30 17:34:03 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_d_ldiglen(double n, double base)
{
	unsigned int	len;

	if (ft_dmod(base, 1.0) != 0.0 || base < 2.0)
		return (0);
	len = (n < 0.0) ? 1 : 0;
	len += (n < 1.0 && n > -1.0) ? 1 : 0;
	while (n >= 1.0 || n <= -1.0)
	{
		len++;
		n /= base;
	}
	return (len);
}
