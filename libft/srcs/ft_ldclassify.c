/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldclassify.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:51:51 by lutsiara          #+#    #+#             */
/*   Updated: 2018/12/28 22:09:12 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <float.h>
#include <math.h>
#include "ft_ieee.h"

int		ft_ldclassify(long double x)
{
	t_u_ieee_ld		u;

	u.ld = x;
	if (u.sld.e == 0)
	{
		if ((u.sld.fl | u.sld.fh | u.sld.pl | u.sld.ph) == 0)
			return (FP_ZERO);
		return (FP_SUBNORMAL);
	}
	if (u.sld.e == LD_EXP_INFNAN)
	{
		if ((u.sld.fl | u.sld.fh | u.sld.pl | u.sld.ph) == 0)
			return (FP_INFINITE);
		return (FP_NAN);
	}
	return (FP_NORMAL);
}
