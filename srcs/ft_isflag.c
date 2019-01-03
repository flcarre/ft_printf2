/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:54:17 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/03 16:55:48 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_isflag(char *f, char *lm, unsigned long *i)
{
	unsigned long	n;

	n = 0;
	while (f[n] && !ft_isid(f[n]))
		n++;
	lm[0] = (ft_strncmp(f, "L", n) == 0) ? 'L' : '\0';
	lm[0] = (ft_strncmp(f, "l", n) == 0 || \
					ft_strncmp(f, "ll", n) == 0) ? 'l' : '\0';
	lm[0] = (ft_strncmp(f, "h", n) == 0 || \
					ft_strncmp(f, "hh", n) == 0)) ? 'h' : '\0';
	lm[1] = (ft_strncmp(f, "ll", n) == 0) ? 'l' : '\0';
	lm[1] = (ft_strncmp(f, "hh", n) == 0) ? 'h' : '\0';
	lm[2] = '\0';
	i[0] += ft_strlen(lm);
}
