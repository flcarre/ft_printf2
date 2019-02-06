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
	ft_printf("%f\n", DBL_MIN);
	ft_printf("%.1000f\n", DBL_MIN);
	ft_printf("%.*f\n", 1000, DBL_MIN);
	printf("%f\n", DBL_MIN);
	printf("%.1000f\n", DBL_MIN);
	printf("%.*f\n", 1000, DBL_MIN);
	return 0;
}
