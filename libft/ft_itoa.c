/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 17:57:47 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/20 11:49:50 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int value)
{
	int		l;
	int		n;
	char	*nbr;
	int		csign;

	n = value;
	l = !(value);
	csign = ((value < 0) ? 1 : 0);
	while (n != 0)
	{
		l++;
		n = n / 10;
	}
	if (!(nbr = (char*)ft_memalloc(sizeof(char) * (l + 1 + csign))))
		return (0);
	nbr[0] = '-';
	while (l > 0)
	{
		n = value % 10;
		nbr[--l + csign] = '0' + (n < 0 ? -n : n);
		value = (value - n) / 10;
	}
	return (nbr);
}
