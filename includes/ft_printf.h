/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:07:32 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/08 07:03:12 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <wchar.h>

typedef struct				s_id
{
	unsigned char			fm;
	unsigned int			w;
	unsigned int			p;
	char					lm[3];
	char					id[10];
}							t_id;

int							ft_printf(const char *format, ...);
int							ft_converter(char **fmt, va_list args, int *r);
void						ft_parse(t_id *e, char **f, va_list args);
int							ft_isid(char c);
int							ft_isfm(char c);
int							ft_precprocess(t_id *e);
void						ft_eprocess(t_id *e);
void						ft_erounding(char **str, unsigned int n);
void						ft_frounding(char **str, unsigned int n);
int							ft_signconv(char c);
int							ft_widthprocess(t_id *e);
void						ft_print(t_id **e, t_list **l, int *r);

#endif
