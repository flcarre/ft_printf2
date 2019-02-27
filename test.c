int main(int argc, char const *argv[]) {
	ft_printf("?%5.x %5.0x?\n", 0, 0);
	printf("!%5.x %5.0x!\n", 0, 0);
	ft_printf("?%5.o %5.0o?\n", 0, 0);
	printf("!%5.o %5.0o!\n", 0, 0);
	ft_printf("?%5.d %5.0d?\n", 0, 0);
  	printf("!%5.d %5.0d!\n", 0, 0);
	ft_printf("?% u?\n", 4294967295);
	printf("!% u!\n", 4294967295);
	ft_printf("?%+u?\n", 4294967295);
	printf("!%+u!\n", 4294967295);
	return 0;
}
