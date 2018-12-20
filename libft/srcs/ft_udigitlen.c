/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_udigitlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:35:45 by flcarre           #+#    #+#             */
/*   Updated: 2018/12/20 18:39:44 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_udigitlen(unsigned int n, unsigned int base)
{
	unsigned int	len;

	if (base < 2)
		return (0);
	len = (!n) ? 1 : 0;
	while (n)
	{
		len++;
		n /= base;
	}
	return (len);
}
