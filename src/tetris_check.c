/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:29:51 by aerragha          #+#    #+#             */
/*   Updated: 2018/11/03 16:27:11 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_no_hash(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			return (0);
		i++;
	}
	return (1);
}

void	tetris_valid(char *tet, int j)
{
	tet[j] = '@';
	if (j - 5 > 0 && tet[j - 5] == '#')
		tetris_valid(tet, j - 5);
	if (j - 1 > 0 && tet[j - 1] == '#')
		tetris_valid(tet, j - 1);
	if (tet[j + 1] && tet[j + 1] == '#')
		tetris_valid(tet, j + 1);
	if (tet[j + 5] && tet[j + 5] == '#')
		tetris_valid(tet, j + 5);
	return ;
}

int		tetris_check(char *tab)
{
	int i;

	i = 0;
	while (tab[i] && tab[i] != '#')
		i++;
	if (tab[i] == '#')
		tetris_valid(tab, i);
	if (!(check_no_hash(tab)))
		return (0);
	return (1);
}
