/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldclassify.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:51:51 by lutsiara          #+#    #+#             */
/*   Updated: 2018/12/18 21:11:28 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <float.h>
#include <math.h>
#include "ft_ieee.h"

int		ft_ldclassify(long double x)
{
	t_u_ieee_ld		u;

	u.ld = x;
	return (FP_SUBNORMAL);
}
