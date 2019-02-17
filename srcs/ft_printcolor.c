/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcolor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:20:51 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/11 15:37:43 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printcolor(t_id *e)
{
	long	r;

	(!ft_strcmp(id, "{}")) ? (r = ft_iputstr("\033[m")) : 0;
	(!ft_strcmp(id, "{BLACK}")) ? (r = ft_iputstr("\033[30m")) : 0;
	(!ft_strcmp(id, "{RED}")) ? (r = ft_iputstr("\033[31m")) : 0;
	(!ft_strcmp(id, "{GREEN}")) ? (r = ft_iputstr("\033[32m") : 0;
	(!ft_strcmp(id, "{YELLOW}")) ? (r = ft_iputstr("\033[33m")) : 0;
	(!ft_strcmp(id, "{BLUE}")) ? (r = ft_iputstr("\033[34m")) : 0;
	(!ft_strcmp(id, "{PURPLE}")) ? (r = ft_iputstr("\033[35m")) : 0;
	(!ft_strcmp(id, "{CYAN}")) ? (r = ft_iputstr("\033[36m")) : 0;
	(!ft_strcmp(id, "{WHITE}")) ? (r = ft_iputstr("\033[37m")) : 0;
	(!ft_strcmp(id, "{GREY}")) ? (r = ft_iputstr("\033[1;30m")) : 0;
	(!ft_strcmp(id, "{ORANGE}")) ? (r = ft_iputstr("\033[1;31m")) : 0;
	(!ft_strcmp(id, "{HBLACK}")) ? (r = ft_iputstr("\033[40m")) : 0;
	(!ft_strcmp(id, "{HRED}")) ? (r = ft_iputstr("\033[41m")) : 0;
	(!ft_strcmp(id, "{HGREEN}")) ? (r = ft_iputstr("\033[42m")) : 0;
	(!ft_strcmp(id, "{HYELLOW}")) ? (r = ft_iputstr("\033[43m")) : 0;
	(!ft_strcmp(id, "{HBLUE}")) ? (r = ft_iputstr("\033[44m")) : 0;
	(!ft_strcmp(id, "{HPURPLE}")) ? (r = ft_iputstr("\033[45m")) : 0;
	(!ft_strcmp(id, "{HCYAN}")) ? (r = ft_iputstr("\033[46m")) : 0;
	(!ft_strcmp(id, "{HWHITE}")) ? (r = ft_iputstr("\033[47m")) : 0;
	return ((int)r);
}
