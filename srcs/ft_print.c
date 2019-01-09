/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:21:37 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/09 11:30:21 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print(t_id *e, t_list *l)
{
	while(t->content || e->s)
	{
		write(1, t->content, t->content_size);
		write(1, e->s, ft_strlen(e->s));
		t = t->next;
		e = e->next;
	}
}
