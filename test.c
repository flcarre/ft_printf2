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
	ft_printf("1 = /%c/\n", 'k');
	ft_printf("2 = /%5c/\n", 'k');
	ft_printf("3 = /%05d/\n", 3);
	ft_printf("4 = /%+05d/\n", 3);
	ft_printf("5 = /% 5d/\n", 3);
	ft_printf("6 = /% 05d/\n", 3);
	ft_printf("7 = /%-5d/\n", 3);
	ft_printf("8 = /%d/\n", -3);
	ft_printf("9 = /%05d/\n", -3);
	ft_printf("10 = /%+05d/\n", -3);
	ft_printf("11 = /% 5d/\n", -3);
	ft_printf("12 = /% 05d/\n", -3);
	ft_printf("13 = /%-5d/\n", -3);
	ft_printf("14 = /%.5s/\n", "delfjzekfeiofjljfzdjlfjeoifleraflebf");
	ft_printf("15 = /%p/\n", argv);
	printf("\n\n1 = /%c/\n", 'k');
	printf("2 = /%5c/\n", 'k');
	printf("3 = /%05d/\n", 3);
	printf("4 = /%+05d/\n", 3);
	printf("5 = /% 5d/\n", 3);
	printf("6 = /% 05d/\n", 3);
	printf("7 = /%-5d/\n", 3);
	printf("8 = /%d/\n", -3);
	printf("9 = /%05d/\n", -3);
	printf("10 = /%+05d/\n", -3);
	printf("11 = /% 5d/\n", -3);
	printf("12 = /% 05d/\n", -3);
	printf("13 = /%-5d/\n", -3);
	printf("14 = /%.5s/\n", "delfjzekfeiofjljfzdjlfjeoifleraflebf");
	printf("15 = /%p/\n", argv);
	return 0;
}
