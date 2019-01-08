/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:07:32 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/08 16:44:45 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"
# include <stdarg.h>
# include <wchar.h>

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
		void				*p;
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
	char					*s;
	t_var					arg;
	struct s_id				*next;
}							t_id;

int							ft_printf(const char *format, ...);
t_id						*ft_parse(char *format, t_list **s, va_list *args);
t_id						*ft_newid(void);
void						ft_delid(t_id **list);
void						ft_enqueueid(t_id **list, t_id *e);
int							ft_idisnull(t_id *list);
int							ft_lmisnull(t_id *list);
unsigned int				ft_idpos(t_id *list);
unsigned int				ft_compid(char *id, t_id **list, unsigned long *i);
int							ft_storetolist(char *s, unsigned long *i, \
							t_list **str);
int							ft_isid(char c);
int							ft_isfm(char c);
void						ft_iscolor(unsigned long *i, char *s, t_id *e);
void						ft_isflag(char *f, char *lm, unsigned long *i);
void						ft_getarg(va_list *args, t_id *e);
void						ft_get0(va_list *arg, unsigned int i, t_var *u);
void						ft_get1(va_list *arg, unsigned int i, t_var *u);
void						ft_get2(va_list *arg, unsigned int i, t_var *u);
void						ft_get3(va_list *arg, unsigned int i, t_var *u);
void						ft_get4(va_list *arg, unsigned int i, t_var *u);
void						ft_get5(va_list *arg, unsigned int i, t_var *u);
void						ft_get6(va_list *arg, unsigned int i, t_var *u);
void						ft_get7(va_list *arg, unsigned int i, t_var *u);
void						ft_get8(va_list *arg, unsigned int i, t_var *u);
void						ft_get9(va_list *arg, unsigned int i, t_var *u);
void						ft_get10(va_list *arg, unsigned int i, t_var *u);
void						ft_get11(va_list *arg, unsigned int i, t_var *u);
void						ft_get12(va_list *arg, unsigned int i, t_var *u);
void						ft_get13(va_list *arg, unsigned int i, t_var *u);
void						ft_get14(va_list *arg, unsigned int i, t_var *u);



#endif
