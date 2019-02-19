/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:33:53 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/19 20:47:28 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_wstrlen(const int *ws)
{
	unsigned long	len;

	len = 0;
	while (*(ws + len))
		len++;
	return (len);
}
