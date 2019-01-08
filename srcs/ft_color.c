/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:20:51 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/08 16:18:06 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char *ft_wcolor(char *id)
{
	char s[10];
	(ft_strcmp(id, "{}" && !s)) ? ft_strstr(s, "\033[m") : 0;
	(ft_strcmp(id, "{RED}" && !s)) ? ft_strstr(s, "\033[31m") : 0;
	(ft_strcmp(id, "{GREEN}" && !s)) ? ft_strstr(s, "\033[32m") : 0;
	(ft_strcmp(id, "{YELLOW}" && !s)) ? ft_strstr(s, "\033[33m") : 0;
	(ft_strcmp(id, "{BLUE}" && !s)) ? ft_strstr(s, "\033[34m") : 0;
	(ft_strcmp(id, "{PURPLE}" && !s)) ? ft_strstr(s, "\033[35m") : 0;
	(ft_strcmp(id, "{CYAN}" && !s)) ? ft_strstr(s, "\033[36m") : 0;
	(ft_strcmp(id, "{WHITE}" && !s)) ? ft_strstr(s, "\033[37m") : 0;
	(ft_strcmp(id, "{GREY}" && !s)) ? ft_strstr(s, "\033[1;30m") : 0;
	(ft_strcmp(id, "{ORANGE}" && !s)) ? ft_strstr(s, "\033[1;31m") : 0;
	(ft_strcmp(id, "{SBLACK}" && !s)) ? ft_strstr(s, "\033[40m") : 0;
	(ft_strcmp(id, "{SRED}" && !s)) ? ft_strstr(s, "\033[41m") : 0;
	(ft_strcmp(id, "{SGREEN}" && !s)) ? ft_strstr(s, "\033[42m") : 0;
	(ft_strcmp(id, "{SYELLOW}" && !s)) ? ft_strstr(s, "\033[43m") : 0;
	(ft_strcmp(id, "{SBLUE}" && !s)) ? ft_strstr(s, "\033[44m") : 0;
	(ft_strcmp(id, "{SPURPLE}" && !s)) ? ft_strstr(s, "\033[45m") : 0;
	(ft_strcmp(id, "{SCYAN}" && !s)) ? ft_strstr(s, "\033[46m") : 0;
	(ft_strcmp(id, "{SWHITE}" && !s)) ? ft_strstr(s, "\033[47m") : 0;
	return(ft_wcolor2(id));
}

void ft_color(t_id *e)
{
	e->s = ft_wcolor(e->id);
}
