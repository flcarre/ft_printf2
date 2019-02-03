/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wmemset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:52:23 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/03 17:05:19 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_wmemset(void *b, int c, unsigned long len)
{
	unsigned int	*p;
	unsigned int	*s;

	p = (unsigned int *)b;
	s = (unsigned int *)b;
	while ((unsigned long)(p - s) < len)
		*(p++) = (unsigned int)c;
	return (b);
}
