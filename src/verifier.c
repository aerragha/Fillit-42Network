/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifier.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:05:37 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/11/05 19:59:13 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		checker(char *buf, int i, int j, int r)
{
	if (buf[0] != '.' && buf[0] != '#')
		return (0);
	else if (buf[i] != '.' && buf[i] != '#' && (i != 20 && j % 5 != 0))
		return (0);
	if (buf[i] != '\n' && j % 5 == 0)
		return (0);
	else if (buf[r - 1] != '\n')
		return (0);
	return (1);
}

int		verifier(char *buf, int r)
{
	int i;
	int j;
	int cp;

	i = 0;
	j = 2;
	cp = 0;
	if (buf[0] == '#')
		cp++;
	while (buf[++i] != '\0')
	{
		if (!(checker(buf, i, j, r)))
			return (0);
		if (buf[i] == '#')
			cp++;
		j++;
	}
	if (i != 21 && i != 20)
		return (0);
	else if (cp != 4)
		return (0);
	return (1);
}
