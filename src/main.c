/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:07:20 by aerragha          #+#    #+#             */
/*   Updated: 2018/11/13 11:27:58 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int sqr;

	sqr = 0;
	if (nb > 0)
	{
		sqr = 1;
		while (sqr * sqr <= nb)
			sqr++;
		sqr = (sqr * sqr) <= nb ? sqr : sqr - 1;
	}
	return (sqr);
}

int		list_tetris_len(t_tetris *t)
{
	if (!t)
		return (0);
	else
		return (1 + list_tetris_len(t->next));
}

void	ft_error(void)
{
	ft_putstr("error\n");
	exit(EXIT_FAILURE);
}

void	ft_usage(void)
{
	ft_putstr("usage: ./fillit file\n");
	exit(EXIT_FAILURE);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_usage();
	else
		ft_fillit(argv[1]);
	return (0);
}
