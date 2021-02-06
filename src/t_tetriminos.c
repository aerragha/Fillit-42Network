/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tetriminos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:14:19 by aerragha          #+#    #+#             */
/*   Updated: 2018/11/08 19:59:40 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetris	*replace_tetris(char *tetris, int index)
{
	t_tetris	*new;
	int			i;
	int			k;
	int			i2;

	if ((new = (t_tetris *)malloc(sizeof(*new))))
	{
		i = 0;
		i2 = 0;
		k = 0;
		while (tetris[i])
		{
			if (tetris[i] == '@')
			{
				i2 = (k ? i2 : i);
				new->tab[k].x = (i % 5) - (i2 % 5);
				new->tab[k].y = (i / 5) - (i2 / 5);
				k++;
			}
			i++;
		}
		new->alpha = 'A' + index;
		new->next = NULL;
	}
	return (new);
}

void		list_join(t_tetris **t1, t_tetris *t2)
{
	t_tetris *new;

	if (!t1 || !t2)
		return ;
	else if (!*t1)
		*t1 = t2;
	else
	{
		new = *t1;
		while (new->next)
			new = new->next;
		if (new)
			new->next = t2;
	}
}
