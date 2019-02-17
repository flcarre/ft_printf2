/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:53:37 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/14 15:25:23 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isid(char c)
{
	if (c == 'c' || c == 's')
		return (1);
	if (c == 'd' || c == 'i')
		return (2);
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		return (3);
	if (c == 'f')
		return (4);
	if (c == '%')
		return (5);
	if (c == '{')
		return (6);
	if (c == 'p')
		return (7);
	return (0);
}
