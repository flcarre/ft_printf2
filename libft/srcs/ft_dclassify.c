/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dclassify.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:51:22 by lutsiara          #+#    #+#             */
/*   Updated: 2018/12/18 21:11:31 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <float.h>
#include <math.h>
#include "ft_ieee.h"

int		ft_dclassify(double x)
{
	t_u_ieee_d		u;

	u.d = x;
	return (FP_SUBNORMAL);
}
