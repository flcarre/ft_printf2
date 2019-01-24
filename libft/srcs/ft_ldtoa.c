/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:17:57 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/24 01:05:36 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <float.h>

static void	ft_fill_tx3(unsigned int *p[4], int exp)
{
	int				min;
	unsigned int	c;
	unsigned int	y;

	while (exp < 0)
	{
		c = 0;
		min = (9 <= -exp) ? 9 : -exp;
		p[3] = p[1];
		while (p[3] < p[0])
		{
			y = *p[3] & ((1 << min) - 1);
			*p[3] = (*p[3] >> min) + c;
			c = (1000000000 >> min) * y;
			p[3]++;
		}
		(!(*p[1])) ? p[1]++ : 0;
		(c) ? *(p[0]++) = c : 0;
		exp += min;
	}
}

static void	ft_fill_tx2(unsigned int *p[4], int exp)
{
	int				min;
	unsigned int	c;
	unsigned long	y;

	while (exp > 0)
	{
		c = 0;
		min = (29 <= exp) ? 29 : exp;
		p[3] = p[0] - 1;
		while (p[3] >= p[1])
		{
			y = ((unsigned long)*p[3] << min) + c;
			*p[3] = y % 1000000000;
			c = y / 1000000000;
			p[3]--;
		}
		(c) ? (*(--p[1]) = c) : 0;
		while (p[0] > p[1] && !p[0][-1])
			p[0]--;
		exp -= min;
	}
	ft_fill_tx3(p, exp);
}

static void	ft_fill_tx(long double x, unsigned int *tx, \
			unsigned long size1, unsigned int *p[4])
{
	int				exp;
	int				i;

	x = (ft_signbit(0, &x)) ? -x : x;
	x = ft_ldfrexp(x, &exp) * 2;
	(x) ? exp-- : 0;
	(x) ? (exp -= 28) : 0;
	(x) ? (x *= 0x1P28) : 0;
	i = 3;
	if (exp <= 0)
		while (i--)
			p[i] = tx;
	else
		while (i--)
			p[i] = tx + size1 / sizeof(*tx) - LDBL_MANT_DIG - 1;
	i = 1;
	while (i || x)
	{
		(i) ? i-- : 0;
		*p[0] = x;
		x = 1000000000 * (x - (*(p[0]++)));
	}
	ft_fill_tx2(p, exp);
}

static void	ft_toa(unsigned int *p[4], char **a)
{
	char	*s;
	char	buf[9 + LDBL_MANT_DIG / 4];

	p[3] = p[1] - 1;
	while (++p[3] <= p[2])
	{
		s = ft_ull(*p[3], buf + 9);
		if (p[3] != p[1])
			while (s > buf)
				*(--s) = '0';
		else if (s == buf + 9)
			*(--s) = '0';
		ft_strstore(a, s, buf + 9 - s);
	}
	ft_strstore(a, ".", 1);
	while (p[3] < p[0])
	{
		s = ft_ull(*p[3], buf + 9);
		while (s > buf)
			*(--s) = '0';
		ft_strstore(a, s, 9);
		p[3]++;
	}
}

char		*ft_ldtoa(long double x)
{
	char			*a;
	unsigned int	tx[SIZE_LD_TX];
	unsigned int	*p[4];
	char			*tmp;

	a = (void *)0;
	tmp = (void *)0;
	if (ft_isnan(x) || ft_isinf(x))
	{
		if (!(a = ft_strnew(3 + ft_signbit(0, &x))))
			return ((void *)0);
		(ft_isinf(x)) ? ft_strcpy(a, (ft_signbit(0, &x)) ? "-inf" : "inf") : 0;
		(ft_isnan(x)) ? ft_strcpy(a, (ft_signbit(0, &x)) ? "-nan" : "nan") : 0;
		return (a);
	}
	ft_bzero((void *)tx, sizeof(tx));
	ft_fill_tx(x, tx, sizeof(tx), p);
	(p[1] > tx) ? p[1] = tx : 0;
	ft_toa(p, &a);
	ft_trim(&a);
	if (ft_signbit(0, &x) && (tmp = a))
		a = ft_strjoin("-", a);
	ft_memdel((void **)&tmp);
	return (a);
}
