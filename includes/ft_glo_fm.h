/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glo_fm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 02:05:05 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/31 17:50:21 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GLO_FM_H
# define FT_GLO_FM_H

# include "ft_printf.h"

typedef struct				s_fm
{
	unsigned char			v;
	void					(*f)(t_id *e);
}							t_fm;

ft_fm						glo_fm[] = {
							{8, &ft_zero},
							{16, &ft_dies},
							{2, &ft_space},
							{1, &ft_plus},
							{4, &ft_minus}
};

#endif
