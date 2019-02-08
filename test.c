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
	printf("/%*.*d/ || /%*.*d/ || /%1$d/", 5, 3, 2, 6, 4, 3, 42);
	return 0;
}
