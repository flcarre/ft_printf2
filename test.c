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
	// ft_printf("/%*.*d/ || /%*.*d/ || /%d/\n", 5, 3, 2, 6, 4, 3, 42);
	// printf("/%*.*d/ || /%*.*d/ || /%d/", 5, 3, 2, 6, 4, 3, 42);
	printf("%020d\n", 9);
	printf("%20d\n", 9);
	return 0;
}
