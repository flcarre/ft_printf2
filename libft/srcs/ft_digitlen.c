/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:21:08 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/08 17:06:52 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_digitlen(long long n, int base)
{
	unsigned int	len;

	if (base < 2)
		return (0);
	len = (!n) ? 1 : 0;
	len += (n < 0) ? 1 : 0;
	while (n)
	{
		len++;
		n /= (long long)base;
	}
	return (len);
}
