/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glo.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 02:05:05 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 02:13:53 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GLO_H
# define FT_GLO_H

# include "ft_printf.h"

typedef struct				s_f
{
		void				(*f)(va_list *, unsigned int, t_var *);
		char				lm[3];
		char				id[10];
}							t_f;

t_f							glo[] = {
							{&ft_get0, "", "i"},
							{&ft_get1, "h", "i"},
							{&ft_get2, "hh", "i"},
							{&ft_get3, "l", "i"},
							{&ft_get4, "ll", "i"},
							{&ft_get0, "", "d"},
							{&ft_get1, "h", "d"},
							{&ft_get2, "hh", "d"},
							{&ft_get3, "l", "d"},
							{&ft_get4, "ll", "d"},
							{&ft_get2, "", "c"},
							{&ft_get5, "l", "c"},
							{&ft_get6, "", "s"},
							{&ft_get7, "l", "s"},
							{&ft_get8, "", "o"},
							{&ft_get9, "h", "o"},
							{&ft_get10, "hh", "o"},
							{&ft_get11, "l", "o"},
							{&ft_get12, "ll", "o"},
							{&ft_get8, "", "u"},
							{&ft_get9, "h", "u"},
							{&ft_get10, "hh", "u"},
							{&ft_get11, "l", "u"},
							{&ft_get12, "ll", "u"},
							{&ft_get8, "", "x"},
							{&ft_get9, "h", "x"},
							{&ft_get10, "hh", "x"},
							{&ft_get11, "l", "x"},
							{&ft_get12, "ll", "x"},
							{&ft_get8, "", "X"},
							{&ft_get9, "h", "X"},
							{&ft_get10, "hh", "X"},
							{&ft_get11, "l", "X"},
							{&ft_get12, "ll", "X"},
							{&ft_get13, "", "f"},
							{&ft_get14, "L", "f"},
							{&ft_get13, "", "g"},
							{&ft_get14, "L", "g"},
							{&ft_get13, "", "e"},
							{&ft_get14, "L", "e"}
}

#endif
