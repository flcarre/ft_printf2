int main(int argc, char const *argv[]) {
	int rf;
	int rp;
	rf = ft_printf("/%d/ =", 42);
	rp = printf("= /%d/\n", 42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	rf = ft_printf("/%d/ =", -42);
	rp = printf("= /%d/\n", -42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	rf = ft_printf("/%05d/ =", 42);
	rp = printf("= /%05d/\n", 42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	rf = ft_printf("/%-5d/ =", 42);
	rp = printf("= /%-5d/\n", 42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	rf = ft_printf("/% d/ =", 42);
	rp = printf("= /% d/\n", 42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	rf = ft_printf("/% d/ =", -42);
	rp = printf("= /% d/\n", -42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	rf = ft_printf("/%+d/ =", 42);
	rp = printf("= /%+d/\n", 42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	rf = ft_printf("/%+d/ =", -42);
	rp = printf("= /%+d/\n", -42) - 1;
	ft_printf("\033[A\033[%dC", rf + rp + 2);
	if (rf == rp)
		ft_printf("%{GREEN}%lc%{}\n", L'✓');
	else{
		ft_printf("%{RED}%lc%{}\n", L'✗');
	}
	return (0);
}
