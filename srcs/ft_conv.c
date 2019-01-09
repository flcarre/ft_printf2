/*
void ft_diouxx2(t_id *e)
{
	// flag hh
	((!ft_strcmp(e->id, "d") || !ft_strcmp(e->id, "i")) && \
	!ft_strcmp(e->lm, "hh")) ? ft_strjoin(e->s, ft_lltoa((long long)e->arg)) : 0;
	((!ft_strcmp(e->id, "o") && !ft_strcmp(e->lm, "hh"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 01234567)) : 0;
	((!ft_strcmp(e->id, "u") && !ft_strcmp(e->lm, "hh"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789)) : 0;
	((!ft_strcmp(e->id, "x") && !ft_strcmp(e->lm, "hh"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789abcdef)) : 0;
	((!ft_strcmp(e->id, "X") && !ft_strcmp(e->lm, "hh"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789ABCDEF)) : 0;
}

void ft_diouxx2(t_id *e)
{
	// flag ll
	((!ft_strcmp(e->id, "d") || !ft_strcmp(e->id, "i")) && )) ? ft_strjoin(e->s, ft_lltoa((long long)e->arg)) : 0;
	((!ft_strcmp(e->id, "o") ))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 01234567)) : 0;
	((!ft_strcmp(e->id, "u") ))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789)) : 0;
	((!ft_strcmp(e->id, "x") && !ft_strcmp(e->lm, "ll"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789abcdef)) : 0;
	((!ft_strcmp(e->id, "X") && !ft_strcmp(e->lm, "ll"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789ABCDEF)) : 0;
	// flag h
	((!ft_strcmp(e->id, "d") || !ft_strcmp(e->id, "i")) && \
	!ft_strcmp(e->lm, "h")) ? ft_strjoin(e->s, ft_lltoa((long long)e->arg)) : 0;
	((!ft_strcmp(e->id, "o") && !ft_strcmp(e->lm, "h"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 01234567)) : 0;
	((!ft_strcmp(e->id, "u") && !ft_strcmp(e->lm, "h"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789)) : 0;
	((!ft_strcmp(e->id, "x") && !ft_strcmp(e->lm, "h"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789abcdef)) : 0;
	((!ft_strcmp(e->id, "X") && !ft_strcmp(e->lm, "h"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789ABCDEF)) : 0;
	ft_diouxx3(e);
}

void ft_diouxx(t_id *e)
{
	// sans option
	(!ft_strcmp(e->id, "d") && !e->lm) ? ft_strjoin(e->s, ft_itoa(e->arg)) : 0;
	(!ft_strcmp(e->id, "i") && !e->lm) ? ft_strjoin(e->s, ft_itoa(e->arg)) : 0;
	(!ft_strcmp(e->id, "o") && !e->lm) ? \
	ft_strjoin(e->s, ft_lltoa_base((long long)e->arg, 01234567)) : 0;
	(!ft_strcmp(e->id, "u") && !e->lm) ? \
	ft_strjoin(e->s, ft_lltoa_base((long long)e->arg, 0123456789)) : 0;
	(!ft_strcmp(e->id, "x") && !e->lm) ? \
	ft_strjoin(e->s, ft_lltoa_base((long long)e->arg, 0123456789abcdef)) : 0;
	(!ft_strcmp(e->id, "X") && !e->lm) ? \
	ft_strjoin(e->s, ft_lltoa_base((long long)e->arg, 0123456789ABCDEF)) : 0;
	// avec flag l
	((!ft_strcmp(e->id, "d") || !ft_strcmp(e->id, "i")) && \
	!ft_strcmp(e->lm, "l")) ? ft_strjoin(e->s, ft_lltoa((long long)e->arg)) : 0;
	((!ft_strcmp(e->id, "o") && !ft_strcmp(e->lm, "l"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 01234567)) : 0;
	((!ft_strcmp(e->id, "u") && !ft_strcmp(e->lm, "l"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789)) : 0;
	((!ft_strcmp(e->id, "x") && !ft_strcmp(e->lm, "l"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789abcdef)) : 0;
	((!ft_strcmp(e->id, "X") && !ft_strcmp(e->lm, "l"))) ? \
	ft_strjoin(e->s, ft_ulltoa_base((unsigned long long)e->arg, 0123456789ABCDEF)) : 0;
	ft_diouxx2(e);
}
*/

void ft_conv(t_id *e)
{
	char *tmp;

	(!ft_strcmp(e->id, "d") || !ft_strcmp(e->id, "i")) ? \
	ft_strjoin(e->s, ft_lltoa((long long)*(e->a))) : 0;
	(!ft_strcmp(e->id, "o")) ? \
	(e->s = ft_ulltoa_base((unsigned long long)*(e->a), "01234567")) : 0;
	(!ft_strcmp(e->id, "u")) ? \
	(e->s = ft_ulltoa((unsigned long long)*(e->a))) : 0;
	(!ft_strcmp(e->id, "x")) ? (e->s = \
	ft_ulltoa_base((unsigned long long)*(e->a), "0123456789abcdef")) : 0;
	(!ft_strcmp(e->id, "X")) ? (e->s = \
	ft_ulltoa_base((unsigned long long)*(e->a), "0123456789ABCDEF")) : 0;
	if (!ft_strcmp("p", e->id))
	{
		tmp = ft_ulltoa_base((unsigned long long)*(e->a), "0123456789abcdef");
		e->s = ft_strjoin("0x", tmp);
		if (!tmp)
			ft_memdel(e->s);
		ft_memdel(tmp);
	}
}
