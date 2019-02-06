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
	ft_printf("\n%f\n", DBL_MIN);
	ft_printf("\n%.1000f\n", DBL_MIN);
	ft_printf("\n%.*f\n", 1000, DBL_MIN);
	ft_printf("\n%.0f\n", 34.4);
	printf("\n%f\n", DBL_MIN);
	printf("\n%.1000f\n", DBL_MIN);
	printf("\n%.*f\n", 1000, DBL_MIN);
	printf("\n%.0f\n", 34.4);
	return 0;
}
