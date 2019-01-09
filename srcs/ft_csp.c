void ft_csp(t_id *e)
{
	// sans option
	(!ft_strcmp(e->id, "c") && !e->lm) ? ft_strjoin(e->s, e->arg) : 0;
	(!ft_strcmp(e->id, "s") && !e->lm) ? ft_strjoin(e->s, e->arg) : 0;
	(!ft_strcmp(e->id, "p") && !e->lm) ? ft_strjoin(e->s, e->arg) : 0;
}
