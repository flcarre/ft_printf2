double	ft_fmod(double nb, double div)
{
	double	ret;
	int		sign;

	sign = nb < 0 ? -1 : 1;
	if (div == 0 || nb * sign > 8e22 || div > 8e22 || div < -8e22)
		return (1e60);
	ret = nb - (div * (int)(nb / div));
	if (ret * sign < 0)
		ret *= -1;
	return (ret);
}

double ft_arrond(double nb, int prec)
{
	int mult;
	int tmp;

	mult = 1;
	tmp = prec;
	while (tmp--)
		mult = mult * 10;
	tmp = ft_fmod(nb, mult);
	printf("%d\n", tmp);
	return(nb);
}

int main(int argc, char const *argv[]) {
	double nb = 3.56589;
	double nb_opt = 3.56789;
	printf("1 opt = %.1g fct = %f\n", nb_opt, ft_arrond(nb, 1));
	printf("2 opt = %.2g fct = %f\n", nb_opt, ft_arrond(nb, 2));
	printf("3 opt = %.3g fct = %f\n", nb_opt, ft_arrond(nb, 3));
	printf("4 opt = %.4g fct = %f\n", nb_opt, ft_arrond(nb, 4));
	printf("5 opt = %.5g fct = %f\n", nb_opt, ft_arrond(nb, 5));
	return 0;
}
