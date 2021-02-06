/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:15:41 by aerragha          #+#    #+#             */
/*   Updated: 2018/11/09 17:33:39 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <fcntl.h>
# include "../libft/libft.h"
# define BUFF_SIZE 21
# define MAX_SIZE 20

typedef	struct			s_point
{
	int	x;
	int	y;
}						t_point;

typedef	struct			s_tetris
{
	char				alpha;
	t_point				tab[4];
	struct s_tetris		*next;
}						t_tetris;

int						verifier(char *buf, int r);
char					**veriftwo(int fd);
int						tetris_check(char *tab);
int						check_no_hash(char *str);
void					tetris_valid(char *tet, int j);
int						checker(char *buf, int i, int j, int r);
char					**split_newline(char *content);
void					initial_board(char (*board)[MAX_SIZE], int size);
int						last_checker(char (*board)[MAX_SIZE], int fd, \
						t_tetris **t);
int						ft_fillit(char *argv);
void					delete_tetris(char (*board)[MAX_SIZE], t_tetris *t, \
						int y, int x);
int						place_tetris(char (*board)[MAX_SIZE], t_tetris *t, \
						int y, int x);
int						solve_tetris(char (*board)[MAX_SIZE], t_tetris *t, \
						int size);
void					affich_board(char (*board)[MAX_SIZE]);
void					free_tetris(t_tetris **t);
t_tetris				*replace_tetris(char *tetris, int index);
void					list_join(t_tetris **t1, t_tetris *t2);
int						ft_sqrt(int nb);
int						list_tetris_len(t_tetris *t);
void					ft_error(void);
void					ft_usage(void);

#endif
