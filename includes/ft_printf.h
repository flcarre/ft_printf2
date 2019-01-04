/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:07:32 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/04 01:52:19 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"
# include <stdarg.h>
# include <wchar.h>

typedef struct				s_f
{
		void				(*f)(va_list *, unsigned int, t_var *);
		char				lm[3];
		char				id[10];
}							t_f;

typedef union				u_var
{
		int					i;
		char				c;
		short				s;
		long				l;
		long long			ll;
		wint_t				w;
		double				d;
		long double			ld;
		char				*cp;
		wchar_t				*wp;
		unsigned int		ui;
		unsigned char		uc;
		unsigned short		us;
		unsigned long		ul;
		unsigned long long	ull;
}							t_var;

typedef struct				s_id
{
	unsigned int			pos;
	unsigned char			fm;
	unsigned int			w[2];
	unsigned int			p[2];
	char					lm[3];
	char					id[10];
	t_var					arg;
	struct s_id				*next;
}							t_id;

int							ft_printf(const char *format, ...);
t_id						*ft_parse(char *format, t_list **str, va_list *args);
t_id						*ft_newid(void);
void						ft_delid(t_id **list);
void						ft_enqueueid(t_id **list, t_id *e);
int							ft_idisnull(t_id *list);
int							ft_lmisnull(t_id *list);
unsigned int				ft_idpos(t_id *list);
int							ft_compid(char *id, t_id **list, unsigned long *i);
int							ft_storetolist(char *s, unsigned long *i, \
							t_list **str);
int							ft_isid(char c);
int							ft_isfm(char c);
void						ft_iscolor(unsigned long *i, char *s, t_id *e);
void						ft_isflag(char *f, char *lm, unsigned long *i);


#endif
