/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:20:51 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/31 22:20:00 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_wcolor(char *id)
{
	char	*s;

	if (!(s = ft_strnew(10)))
		return ((void *)0);
	(!ft_strcmp(id, "{}")) ? ft_strcpy(s, "\033[m") : 0;
	(!ft_strcmp(id, "{BLACK}")) ? ft_strcpy(s, "\033[30m") : 0;
	(!ft_strcmp(id, "{RED}")) ? ft_strcpy(s, "\033[31m") : 0;
	(!ft_strcmp(id, "{GREEN}")) ? ft_strcpy(s, "\033[32m") : 0;
	(!ft_strcmp(id, "{YELLOW}")) ? ft_strcpy(s, "\033[33m") : 0;
	(!ft_strcmp(id, "{BLUE}")) ? ft_strcpy(s, "\033[34m") : 0;
	(!ft_strcmp(id, "{PURPLE}")) ? ft_strcpy(s, "\033[35m") : 0;
	(!ft_strcmp(id, "{CYAN}")) ? ft_strcpy(s, "\033[36m") : 0;
	(!ft_strcmp(id, "{WHITE}")) ? ft_strcpy(s, "\033[37m") : 0;
	(!ft_strcmp(id, "{GREY}")) ? ft_strcpy(s, "\033[1;30m") : 0;
	(!ft_strcmp(id, "{ORANGE}")) ? ft_strcpy(s, "\033[1;31m") : 0;
	(!ft_strcmp(id, "{HBLACK}")) ? ft_strcpy(s, "\033[40m") : 0;
	(!ft_strcmp(id, "{HRED}")) ? ft_strcpy(s, "\033[41m") : 0;
	(!ft_strcmp(id, "{HGREEN}")) ? ft_strcpy(s, "\033[42m") : 0;
	(!ft_strcmp(id, "{HYELLOW}")) ? ft_strcpy(s, "\033[43m") : 0;
	(!ft_strcmp(id, "{HBLUE}")) ? ft_strcpy(s, "\033[44m") : 0;
	(!ft_strcmp(id, "{HPURPLE}")) ? ft_strcpy(s, "\033[45m") : 0;
	(!ft_strcmp(id, "{HCYAN}")) ? ft_strcpy(s, "\033[46m") : 0;
	(!ft_strcmp(id, "{HWHITE}")) ? ft_strcpy(s, "\033[47m") : 0;
	return (s);
}

void		ft_color(t_id *e)
{
	e->s = ft_wcolor(e->id);
}
