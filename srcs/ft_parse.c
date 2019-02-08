/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:25:46 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/08 07:02:59 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_color(char **f, char *id)
{
	int	j;

	j = 0;
	if (!ft_strchr(*f, (int)'}'))
		return ;
	while(**f && **f != '}' && j < 9)
		id[j++] = *(*f++);
	id[j] = (j < 9) ? **f : '\0';
	*f += (**f == '}') ? 1 : 0;
}

static void	ft_lm(char **f, char *lm)
{
	unsigned long	n;

	n = 0;
	while ((*f)[n] && !ft_isid((*f)[n]))
		n++;
	lm[0] = (n && ft_strncmp(*f, "L", n) == 0) ? 'L' : '\0';
	lm[0] = (n && (ft_strncmp(*f, "l", n) == 0 || \
					ft_strncmp(*f, "ll", n) == 0)) ? 'l' : lm[0];
	lm[0] = (n && (ft_strncmp(*f, "h", n) == 0 || \
					ft_strncmp(*f, "hh", n) == 0)) ? 'h' : lm[0];
	lm[1] = (n > 1 && ft_strncmp(*f, "ll", n) == 0) ? 'l' : '\0';
	lm[1] = (n > 1 && ft_strncmp(*f, "hh", n) == 0) ? 'h' : lm[1];
	lm[2] = '\0';
	(*f) += ft_strlen(lm);
}

static void	ft_p(char **f, t_id *e, va_list args)
{
	if (**f != '.' && (e->p = 6))
		return ;
	(*f)++;
	if (**f == '*')
	{
		e->p = va_arg(args, int);
		(*f)++;
	}
	else
	{
		e->p = ft_atoui(*f);
		*f += (e->p != 0 || **f == '0') ? ft_udigitlen(ft_atoui(*f), 10) : 0;
	}
}

static void	ft_w(char **f, t_id *e, va_list args)
{
	if (**f == '*')
	{
		e->w = va_arg(args, int);
		(*f)++;
	}
	else
	{
		e->w = ft_atoui(*f);
		*f += (e->w != 0 || **f == '0') ? ft_udigitlen(ft_atoui(*f), 10) : 0;
	}
}

void		ft_parse(t_id *e, char **f, va_list args)
{
	e->fm = 0;
	e->w = 0;
	e->p = 0;
	ft_bzero((void *)e->lm, 3);
	ft_bzero((void *)e->id, 10);
	(ft_isid(**f) == 6) ? ft_color(f, e->id) : 0;
	(!e->id[0] && ft_isid(**f) == 5 && (*f)++) ? (e->id[0] = '%') : 0;
	if (e->id[0])
		return ;
	while (**f && ft_isfm(**f))
		e->fm |= ft_isfm(*((*f)++));
	ft_w(f, e, args);
	ft_p(f, e, args);
	ft_lm(f, e->lm);
	e->id[0] = (ft_isid(**f)) ? **f : '\0';
	*f += (ft_isid(**f)) ? 1 : 0;
}
