#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "includes/ft_printf.h"

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

int main(int argc, char const *argv[]) {
	(void)argc;
	(void)argv;
	// printf("g%%{blue}1er%%1$*2$lld2eme%%3$#.*2$f%%1$i%%{red}fin%%{}\n\n");
	//ft_printf("g%{blue}1er%1$*2$lld2eme%3$#*2$.*2$f%1$i%{red}fin%{}");
	// printf("%.*Lf\n", LDBL_MAX_EXP, LDBL_MIN);
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldexp(LDBL_MIN, 1));
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldexp(ft_ldexp(LDBL_MIN, 1), -1));
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldmod(42.42L, 1.0L));
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
	printf("%d\n", 23);
	return 0;
}
