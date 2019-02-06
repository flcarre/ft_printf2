#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "includes/ft_printf.h"
#include "libft/includes/ft_ieee.h"
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>

int main(int argc, char const *argv[]) {
	(void)argc;
	(void)argv;
	//printf("%d | %d\n", LDBL_MANT_DIG, DBL_MAX_EXP);
	// printf("%.*Lf\n", LDBL_MAX_EXP, LDBL_MIN);
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldexp(LDBL_MIN, 1));
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldexp(ft_ldexp(LDBL_MIN, 1), -1));
	//printf("%.*Lf\n", 200, ft_ldmod(-42.42L, 1.0L));
	//printf("%.*f\n", 200, ft_dmod(-42.42, 1.0));
	//printf("%.*Lf\n", LDBL_MAX_EXP, ft_ldmod(LDBL_MIN, 1.0L));
	//printf("%d\n", LDBL_MANT_DIG);
	// printf("%d | %d | %d\n", LDBL_MIN_10_EXP, LDBL_MAX_10_EXP, LDBL_MAX_EXP * 2 - 16323);
	// printf("%.*Lf\n", LDBL_MAX_EXP * 2 - 16323, 3.6451995318824746025E-4951L);
	// printf("%d\n", f(6, 1, "abc", 4));
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
	//printf("%f\n", 1e63);
	/*
	printf("%1$0*2$.*3$f\n", -42.1, 50, -40);
	printf("%050.40f\n", 42.1);
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
	// ft_printf("abcd%dadsaaezx%ddfhbds\n", 3, 4);
	ft_printf("%{BLUE}abcd%d%{}adsaaezx%{HYELLOW}%{RED}%d%{}\n", 3, 42);
	ft_printf("abcd%dadsaaezx%d\n", 3, 4);
	ft_printf("abcd%dadsaaezx%d\n", 3, 4);
	ft_printf("abcd%dadsaaezx%d\n", 3, 4);
	// ft_printf("%s\n", "abcd");

	return 0;
}
