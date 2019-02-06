#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "includes/ft_printf.h"
#include "libft/includes/ft_ieee.h"
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
/*
static int f(int i, ...)
{
	va_list	args;
	int tmp;
	va_start(args, i);

	tmp = va_arg(args, int);
	tmp = va_arg(args, int);
	tmp = va_arg(args, int);
	va_end(args);
	return(tmp);
}
*/
/*

#define PSH(X) (*(buf++)=(X))
#define PSH1(X) (*(buf--)=(X))
#define PEEK() buf[-1]
#define POP() *(--buf) = '\0'

#define PLUS 1
#define SPACE 2

char * ft_gcvt(double f, size_t ndigit, char * buf)
{
  int i;
  unsigned long long z,k;
  //int exp = 0;
  char *c = buf;
  double f2,t,scal;
  int   sign = 0;

  if((int)ndigit == -1)
    ndigit = 5;

  if (ndigit > 20)
	  ndigit = 20;

  if (f < 0.0) {
    sign = 1;
    f = -f;
	 buf++;
  }

  scal = 1;
  for (i=ndigit; i>0; i--)
	  scal *= 10;
  k = f + 0.1 / scal;
  f2 = f - k;
  if (!f) {
    PSH('0');
    if(ndigit > 0)
      PSH('.');
    for (i=0;i<ndigit;i++)
      PSH('0');
  	   PSH(0);
  	 return c;
  }

  i = 1;
  while (f >= 10.0) {
  	f /= 10.0;
  	i++;
  }

  buf += i + ndigit + 1;

  PSH1(0);

  if(ndigit > 0) {
	  t = f2 * scal;
	 z = t + 0.5;
	 printf("%llu\n", z);
    for (i = 0;i < ndigit;i++)
    {
      PSH1('0'+ (z % 10));
	   z /= 10;
    }
    PSH1('.');
  }
  else
    PSH1(0);

  do {
    PSH1('0'+ (k % 10));
    k /= 10;
  }while (k);

  if (sign)
    PSH1('-');
  return c;
}
*/

int main(int argc, char const *argv[]) {
	(void)argc;
	(void)argv;
	//printf("%d | %d\n", LDBL_MANT_DIG, DBL_MAX_EXP);
	// printf("g%%{blue}1er%%1$*2$lld2eme%%3$#.*2$f%%1$i%%{red}fin%%{}\n\n");
	//ft_printf("g%{blue}1er%1$*2$lld2eme%3$#*2$.*2$f%1$i%{red}fin%{}");
	// printf("%.*Lf\n", LDBL_MAX_EXP, LDBL_MIN);
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldexp(LDBL_MIN, 1));
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldexp(ft_ldexp(LDBL_MIN, 1), -1));
	//printf("%.*Lf\n", 200, ft_ldmod(-42.42L, 1.0L));
	//printf("%.*f\n", 200, ft_dmod(-42.42, 1.0));
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldmod(LDBL_MIN, 1.0L));
	//printf("%d\n", LDBL_MANT_DIG);
	// printf("%d | %d | %d\n", LDBL_MIN_10_EXP, LDBL_MAX_10_EXP, LDBL_MAX_EXP * 2 - 16323);
	//printf("%u\n", ft_ld_ldiglen(42.42L, 10.0L));
	//printf("%u\n", ft_ld_ldiglen(-0.42L, 10.0L));
	//printf("%d > %.58Lf\n", ft_ld_rdiglen(42.42L, 10.0L), 42.42L);
	//printf("%d > %.66Lf\n", ft_ld_rdiglen(-0.42L, 10.0L), -0.42L);
	// printf("%.*Lf\n", LDBL_MAX_EXP * 2 - 16323, 3.6451995318824746025E-4951L);
	// printf("%d\n", f(6, 1, "abc", 4));
	// write(1, "\033[1;30m"Bhdjkhjkdjksfhks", 100);
	// printf("%-30d\n", 23);
	// printf("%30d\n", 23);
	// printf("%+s\n", "AZDZDD");
	// printf("%f\n", (float)3);
	// printf("%#f\n", (float)3);
	// printf("%06.3d\n", 4);
	// printf("%.3d\n", 4);
	// printf("%.3s\n", "ok");
	// printf("%#.4x\n", 42);
	//printf("%+04d\n", 42);
	/*
	t_u_ieee_d	ud;
	t_u_ieee_ld	uld;

	ud.d = 0.42;
	ud.sd.e = 2047;

	uld.ld = 0.42L;
	uld.sld.e = 32767;
	printf("%.100f\n", ud.d);
	printf("%.100Lf\n", uld.ld);
	if (ft_dclassify(ud.d) == FP_INFINITE)
		printf("%s\n", "inf");
	if (ft_dclassify(ud.d) == FP_NAN)
		printf("%s\n", "nan");
	if (uld.ld != uld.ld)
		printf("%s\n", "nan");
	if (!(uld.ld != uld.ld) && (uld.ld - uld.ld != uld.ld - uld.ld))
		printf("%s\n", "inf");
	//printf("%#.100f\n", ud.d);
	//printf("%#.100Lf\n", uld.ld);
	ud.d = 0.0;
	ud.sd.e = 2047;

	uld.ld = 1.0L / 0.0L;
	printf("%.100f\n", ud.d);
	printf("%.100Lf\n", uld.ld);
	//printf("%#.100f\n", ud.d);
	//printf("%#.100Lf\n", uld.ld);
	//printf("%s\n", ft_ldtoa(uld.ld));
	if (ft_dclassify(ud.d) == FP_INFINITE)
		printf("%s\n", "inf");
	if (ft_dclassify(ud.d) == FP_NAN)
		printf("%s\n", "nan");
	if (uld.ld != uld.ld)
		printf("%s\n", "nan");
	if (!(uld.ld != uld.ld) && (uld.ld - uld.ld != uld.ld - uld.ld))
		printf("%s\n", "inf");
	*/
	/*
	 char	*s;
	 s = ft_dtoa(-0.1);
	 if (s)
		 printf("%s\n", s);
	 printf("\n%.100f\n", -0.1);
	 ft_memdel((void *)&s);
	 */
	/*
	s = ft_ldtoa(uld.ld);

	if (s)
		printf("%s\n", s);
	printf("\n%.100Lf\n", uld.ld);
	char s[100 + 3 + 1 + 1];
	char *p;
	int	i = 3;
	double x = 123.42;
	int dig;
	dig = 0;
	p = s;
	double n = 1.0;
	while (--i)
		n *= 10.0;
	i = 3;
	while (i--)
	{
		dig = x / n;
		*(p++) = dig % 10 + '0';
		n /= 10;
	}
	*(p++) = '.';
	printf("%.100f\n\n", x);
	i = 100;
	n = 10.0;
	dig = x;
	double f = x - dig;
	i = 100;
	dig = 0;
	while (i--)
	{
		//dig = ft_dmod(f * n, 10.0);
		*(p++) = ft_dmod(f * n, 10.0) + '0';
		n *= 10.0;
	}
	*p = 0;
	printf("%s\n", s);
	char buf[100];
	printf("printf: %.100f\n", 1.42);
	ft_gcvt(1.42, 98, buf);
	printf("ft_gcvt: %s\n",buf);
	gcvt(1.42, 98, buf);
	printf("gcvt: %s\n",buf);
	long double y = 0.42L;
	long double d;
	//unsigned int z;
	d = 1.0L;
	do {
		//z = y;
		y = ft_ldmod(y, 1.0L) * 10.0L;
		printf("%.100Lf\n", y);
		d *= 10.0L;
		//printf("%u", z);
	} while (y);
	printf("%f\n", 1e63);
	*/
	/*
	printf("%1$0*2$.*3$f\n", -42.1, 50, -40);
	printf("%050.40f\n", 42.1);
	printf("%#050.1g\n", -42.1);
	printf("%050.20g\n", 42.1);
	printf("%#.0e\n", -42.1);
	printf("%#.0e\n", 42.1);
	printf("%2.5d\n", -42);
	printf("%.2f\n", 99.999);
	printf("%.100e\n", 89.999);
	printf("%.e\n", 89.999);
	printf("%.100f\n", 89.999);
	printf("%- 10.20e\n", 1.0/0.0);
	printf("%- 10.20f\n", 1.0/0.0);
	printf("%- 10.20g\n", 1.0/0.0);
	printf("%e\n", 1.0/0.0);
	printf("%f\n", 1.0/0.0);
	printf("%g\n", 1.0/0.0);
*/
/*
	printf("g exemple\n");
	printf("%1$0*2$.*3$g\n", -42.1, 50, -40);
	printf("%.2g\n", 42.1);
	printf("%050.20g\n", 42.1);
	printf("%.2g\n", 1.0);
	printf("%.2g\n", 0.0);
	printf("%#.2g\n", 0.0);
	printf("%.0g\n", 0.000009);
	printf("%.0g\n", 0.00009);
	printf("%.0g\n", 0.0009);
	printf("%.0g\n", 0.009);
	printf("%.0g\n", 0.09);
	printf("%.0g\n", 0.9);
	printf("%.2g\n", 42.6);
	printf("%.2g\n", 89.9999);
	printf("%g\n", 89.99999);
	printf("%.2g\n", 99.9999);
	printf("%g\n", 99.99999);
	printf("%g\n", 99.9999999);
	printf("%.4g\n", 94459539.99999);
	printf("%.4g\n", 91999539.99999);
	printf("\n");
	printf("e exemple\n");
	printf("%1$0*2$.*3$e\n", -42.1, 50, -40);
	printf("%.2e\n", 42.1);
	printf("%050.20e\n", 42.1);
	printf("%.2e\n", 1.0);
	printf("%.0e\n", 1.0);
	printf("%#.0e\n", 1.0);
	printf("%#.0e\n", 2455431.0);
	printf("%.2e\n", 0.0);
	printf("%#.2e\n", 0.0);
	printf("%.2e\n", 42.6);
	printf("%.2e\n", 89.9999);
	printf("%e\n", 89.99999);
	printf("%.2e\n", 99.9999);
	printf("%e\n", 99.99999);
	printf("%e\n", 99.9999999);
	printf("%.4e\n", 94459539.99999);
	printf("%.4e\n", 91999539.99999);
	printf("%.11Le\n", 44444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444.99999L);
*/
	// ft_printf("abcd");
	// ft_printf("%d", 3);
	// ft_printf("%d\n", 3);
	ft_printf("abcd%dadsaaezx%ddfhbds", 3, 4);
	// ft_printf("%s\n", "abcd");

	return 0;
}
