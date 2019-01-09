void ft_defmask(int *mask)
{
	mask[0] = 1;
	mask[1] = 2;
	mask[2] = 4;
	mask[3] = 8;
	mask[4] = 16;
}

void ft_isfm(t_id *e)
{
	int mask[5]
	ft_defmask(mask);
	(!ft_strcmp(e->id, "c") && !e->lm) ? ft_strjoin(e->s, e->arg) : 0;
}
