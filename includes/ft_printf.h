/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:07:32 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/08 04:59:36 by flcarre          ###   ########.fr       */
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
	unsigned int			w[2];
	unsigned int			p[3];
	char					lm[3];
	char					id[10];
}							t_id;

int							ft_printf(const char *format, ...);
t_id						*ft_parse(char *fmt, t_list **s);
unsigned long				ft_parseid(char *id, t_id **list, \
							unsigned long *i, unsigned int *pos);
int							ft_isid(char c);
int							ft_isfm(char c);
int							ft_islm(char *s);
void						ft_iscolor(unsigned long *i, char *s, t_id *e);
void						ft_lmprocess(char *f, char *lm, unsigned long *i);
void						ft_color(t_id *e);
int							ft_precprocess(t_id *e);
void						ft_eprocess(t_id *e);
void						ft_erounding(char **str, unsigned int n);
int							ft_signconv(char c);
int							ft_widthprocess(t_id *e);
void						ft_print(t_id **e, t_list **l, int *r);

#endif
