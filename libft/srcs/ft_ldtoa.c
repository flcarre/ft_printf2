/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:17:57 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/07 20:13:20 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_ieee.h"

static void	ft_toa3(long double x, char *ap, char *a, unsigned int p)
{
	t_u_ieee_ld		u;
	unsigned int	i;
	unsigned char	m;

	u.ld = x;
	i = 0;
	while (i < LD_FLB && ap-- > a)
	{
		if (ap - a != p)
		{
			m = ((u.sld.fl & 9) <= 1) ? 1 : 0;
			*ap = (m) ? (u.sld.fl & 7) + '0' : (u.sld.fl & 9) + '0';
			u.sld.fl ^= (m) ? (u.sld.fl & 7) : (u.sld.fl & 9);
			u.sld.fl = (m) ? u.sld.fl >> 3 : u.sld.fl >> 1;
			i += (m) ? 3 : 1;
		}
		else
			*ap = '.';
	}
}

static void	ft_toa2(long double x, char *ap, char *a, unsigned int p)
{
	t_u_ieee_ld		u;
	unsigned int	i;
	unsigned char	m;

	u.ld = x;
	i = 0;
	while (i < LD_PLB && ap-- > a)
	{
		if (ap - a != p)
		{
			m = ((u.sld.pl & 9) <= 1) ? 1 : 0;
			*ap = (m) ? (u.sld.pl & 7) + '0' : (u.sld.pl & 9) + '0';
			u.sld.pl ^= (m) ? (u.sld.pl & 7) : (u.sld.pl & 9);
			u.sld.pl = (m) ? u.sld.pl >> 3 : u.sld.pl >> 1;
			i += (m) ? 3 : 1;
		}
		else
			*ap = '.';
	}
	ft_toa3(x, ap, a, p);
}

static void	ft_toa1(long double x, char *ap, char *a, unsigned int p)
{
	t_u_ieee_ld		u;
	unsigned int	i;
	unsigned char	m;

	u.ld = x;
	i = 0;
	while (i < LD_PHB && ap-- > a)
	{
		if (ap - a != p)
		{
			m = ((u.sld.ph & 9) <= 1) ? 1 : 0;
			*ap = (m) ? (u.sld.ph & 7) + '0' : (u.sld.ph & 9) + '0';
			u.sld.ph ^= (m) ? (u.sld.ph & 7) : (u.sld.ph & 9);
			u.sld.ph = (m) ? u.sld.ph >> 3 : u.sld.ph >> 1;
			i += (m) ? 3 : 1;
		}
		else
			*ap = '.';
	}
	ft_toa2(x, ap, a, p);
}

static void	ft_toa(long double x, char *ap, char *a, unsigned int p)
{
	t_u_ieee_ld		u;
	unsigned int	i;
	unsigned char	m;

	u.ld = x;
	i = 0;
	while (i < LD_FLB && ap-- > a)
	{
		if (ap - a != p)
		{
			m = ((u.sld.fl & 9) <= 1) ? 1 : 0;
			*ap = (m) ? (u.sld.fl & 7) + '0' : (u.sld.fl & 9) + '0';
			u.sld.fl ^= (m) ? (u.sld.fl & 7) : (u.sld.fl & 9);
			u.sld.fl = (m) ? u.sld.fl >> 3 : u.sld.fl >> 1;
			i += (m) ? 3 : 1;
		}
		else
			*ap = '.';
	}
	ft_toa1(x, ap, a, p);
}

char		*ft_ldtoa(long double x)
{
	char			*a;
	unsigned int	i;

	i = ft_ld_ldiglen(x, 10.0L);
	if (!(a = ft_strnew((unsigned long)i + 16445 + 1)))
		return ((void *)0);
	ft_toa(x, a + i + 16445 + 1, a, i);
	return (a);
}
