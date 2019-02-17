/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:50:09 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/14 15:54:36 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glo_print.h"

static int	ft_printarg(t_id *e, va_list args, int *r)
{
	int		i;
	int		t;

	t = 1;
	i = 58 + 1;
	while (t && --i)
		if (!ft_strcmp(e->id, glo_print[i - 1].id) && \
		!ft_strcmp(e->lm, glo_print[i - 1].lm))
			t = 0;
	if (i)
		*r = ((t = glo_print[i - 1].f(e, args)) < 0) ? t : *r + t;
	else
		*r = -1;
	return ((!i) ? 1 : 0);
}

int			ft_converter(char **fmt, va_list args, int *r)
{
	t_id	e;

	(*fmt)++;
	ft_parse(&e, fmt, args);
	if (ft_idisnull(&e))
		return (1);
	if (ft_printarg(&e, args, r))
		return (1);
	return (0);
}
