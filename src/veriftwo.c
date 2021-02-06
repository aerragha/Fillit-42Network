/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   veriftwo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:30:25 by aerragha          #+#    #+#             */
/*   Updated: 2018/11/08 20:18:21 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**split_newline(char *content)
{
	int		i;
	char	**tab;

	i = 0;
	while (content[i] != '\0')
	{
		if (content[i] == '\n' && content[i + 1] == '\n')
			content[i + 1] = '*';
		i++;
	}
	tab = ft_strsplit(content, '*');
	return (ft_strsplit(content, '*'));
}

char	**veriftwo(int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*tab;
	int		r;
	int		count;

	count = 1;
	tab = ft_strnew(1);
	while (((r = read(fd, buff, BUFF_SIZE)) > 0))
	{
		if (count > 26)
			ft_error();
		buff[r] = '\0';
		tab = ft_strjoin(tab, buff);
		if (!(tetris_check(tab)))
			ft_error();
		if (!(verifier(buff, r)))
			ft_error();
		count++;
	}
	if (r == 0 && count == 1)
		ft_error();
	if (buff[20] == '\n')
		ft_error();
	return (split_newline(tab));
}

void	initial_board(char (*board)[MAX_SIZE], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < MAX_SIZE)
	{
		j = 0;
		while (j < MAX_SIZE)
		{
			board[i][j] = (i < size && j < size) ? '.' : '0';
			j++;
		}
		i++;
	}
}

int		last_checker(char (*board)[MAX_SIZE], int fd, t_tetris **t)
{
	char	**tetris;
	int		i;

	tetris = veriftwo(fd);
	if (fd < 0)
		ft_error();
	else
	{
		i = 0;
		while (tetris[i])
		{
			list_join(t, (replace_tetris(tetris[i], i)));
			i++;
		}
		initial_board(board, ft_sqrt(4 * i));
	}
	return (0);
}

int		ft_fillit(char *argv)
{
	int			fd;
	char		board[MAX_SIZE][MAX_SIZE];
	t_tetris	*t;

	t = NULL;
	fd = open(argv, O_RDONLY);
	last_checker(board, fd, &t);
	solve_tetris(board, t, ft_sqrt(list_tetris_len(t) * 4));
	affich_board(board);
	free_tetris(&t);
	return (0);
}
