/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_tetris.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:49:33 by aerragha          #+#    #+#             */
/*   Updated: 2018/11/08 20:18:16 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	delete_tetris(char (*board)[MAX_SIZE], t_tetris *t, int y, int x)
{
	int i;

	if (t)
	{
		i = 0;
		while (i < 4)
		{
			if (board[y + t->tab[i].y][x + t->tab[i].x] != '.')
				board[y + t->tab[i].y][x + t->tab[i].x] = '.';
			i++;
		}
	}
}

int		place_tetris(char (*board)[MAX_SIZE], t_tetris *t, int y, int x)
{
	int	i;

	if (t)
	{
		i = 0;
		while (i < 4)
			if (board[y + t->tab[i].y][x + t->tab[i].x] != '.')
				return (0);
			else
				i++;
		i = 0;
		while (i < 4)
		{
			if (board[y + t->tab[i].y][x + t->tab[i].x] == '.')
				board[y + t->tab[i].y][x + t->tab[i].x] = t->alpha;
			i++;
		}
		return (1);
	}
	return (0);
}

int		solve_tetris(char (*board)[MAX_SIZE], t_tetris *t, int size)
{
	int i;
	int j;

	i = -1;
	while (board[++i][0] != '0' && (j = -1))
	{
		while (board[i][++j] != '0')
		{
			if (place_tetris(board, t, i, j))
			{
				if (!t->next)
					return (1);
				if (solve_tetris(board, t->next, size))
					return (1);
				else
					delete_tetris(board, t, i, j);
			}
		}
	}
	if (t && t->alpha == 'A')
	{
		initial_board(board, size + 1);
		solve_tetris(board, t, size + 1);
	}
	return (0);
}

void	affich_board(char (*board)[MAX_SIZE])
{
	int	i;
	int j;

	i = 0;
	while (board[i][0] != '0')
	{
		j = 0;
		while (board[i][j] != '0')
		{
			ft_putchar(board[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	free_tetris(t_tetris **t)
{
	t_tetris *p;

	p = *t;
	while (p)
	{
		*t = (*t)->next;
		free(p);
		p = *t;
	}
	t = NULL;
}
