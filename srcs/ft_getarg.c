/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 00:22:45 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/04 01:43:26 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_init2(t_f *f)
{
	f[24] = {&ft_get8, "", "x"};
	f[25] = {&ft_get9, "h", "x"};
	f[26] = {&ft_get10, "hh", "x"};
	f[27] = {&ft_get11, "l", "x"};
	f[28] = {&ft_get12, "ll", "x"};
	f[29] = {&ft_get8, "", "X"};
	f[30] = {&ft_get9, "h", "X"};
	f[31] = {&ft_get10, "hh", "X"};
	f[32] = {&ft_get11, "l", "X"};
	f[33] = {&ft_get12, "ll", "X"};
	f[34] = {&ft_get13, "", "f"};
	f[35] = {&ft_get14, "L", "f"};
	f[36] = {&ft_get13, "", "g"};
	f[37] = {&ft_get14, "L", "g"};
	f[38] = {&ft_get13, "", "e"};
	f[39] = {&ft_get14, "L", "e"};
}

static void	ft_init(t_f *f)
{
	f[0] = {&ft_get0, "", "i"};
	f[1] = {&ft_get1, "h", "i"};
	f[2] = {&ft_get2, "hh", "i"};
	f[3] = {&ft_get3, "l", "i"};
	f[4] = {&ft_get4, "ll", "i"};
	f[5] = {&ft_get0, "", "d"};
	f[6] = {&ft_get1, "h", "d"};
	f[7] = {&ft_get2, "hh", "d"};
	f[8] = {&ft_get3, "l", "d"};
	f[9] = {&ft_get4, "ll", "d"};
	f[10] = {&ft_get2, "", "c"};
	f[11] = {&ft_get5, "l", "c"};
	f[12] = {&ft_get6, "", "s"};
	f[13] = {&ft_get7, "l", "s"};
	f[14] = {&ft_get8, "", "o"};
	f[15] = {&ft_get9, "h", "o"};
	f[16] = {&ft_get10, "hh", "o"};
	f[17] = {&ft_get11, "l", "o"};
	f[18] = {&ft_get12, "ll", "o"};
	f[19] = {&ft_get8, "", "u"};
	f[20] = {&ft_get9, "h", "u"};
	f[21] = {&ft_get10, "hh", "u"};
	f[22] = {&ft_get11, "l", "u"};
	f[23] = {&ft_get12, "ll", "u"};
	ft_init2(f);
}

void	ft_getarg(va_list *args, t_id *e)
{
	va_list	tmp;
	t_f		f[40];

	ft_init(f);
	va_copy(tmp, *args);

	va_end(tmp);
}
