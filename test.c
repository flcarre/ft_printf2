#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "includes/ft_printf.h"

int main(int argc, char const *argv[]) {
	(void)argc;
	(void)argv;
	printf("%.4f\n", 1.123456);
	printf("%.4f\n", 1.123416);
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
	return 0;
}
