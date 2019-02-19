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
	// printf("%.1s\n", "ab");
	// printf("%20d\n", 9);
	// printf("% .3c\n", 65);
	// printf("%p\n", 42);
	// printf("%.5p\n", 42);
	// printf("%05.5p\n", 42);
	// printf("%010.5p\n", 42);
	char str[] = "defg\n";
	ft_printf("abc\n");
	ft_printf(1 + str);
	return 0;
}
