#include <locale.h>

int main(int argc, char const *argv[]) {
	// setlocale(LC_ALL, "");
	// printf("%d\n" ,ft_printf("?%.4S?\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));
	// printf("%d\n\n" ,printf("!%.4S!\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));
	// printf("%d\n", ft_printf("?{% C}?\n", 0));
	// printf("%d\n", printf("!{% C}!\n", 0));
	// printf("%d\n", ft_printf("?{%05.Z}?\n", 0));
	// printf("%d\n", printf("!{%05.Z}!\n", 0));
	// printf("%d\n", ft_printf("?%hhC, %hhC?\n", 0, L'Á±≥'));
	// printf("%d\n", printf("!%hhC, %hhC!\n", 0, L'Á±≥'));
	printf("%d\n", ft_printf("?%2.1i?\n", 0));
	printf("%d\n", printf("!%2.1i!\n", 0));
	printf("%d\n", ft_printf("?%012.1ji?\n", 0));
	printf("%d\n", printf("!%012.1ji!\n", 0));
	printf("%d\n", ft_printf("?>------------<%2.1ji>------------<?\n", 0));
	printf("%d\n", printf("!>------------<%2.1ji>------------<!\n", 0));
	printf("%d\n", ft_printf("?^.^/%2.1i^.^/?\n", 0));
	printf("%d\n", printf("!^.^/%2.1i^.^/!\n", 0));
	// ft_printf("%5.2f\n", 1.0 / 0.0);
	// printf("%5.2f\n", 1.0 / 0.0);
	return 0;
}
