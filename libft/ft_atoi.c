/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:09:39 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 21:07:49 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int n;
	int i;
	int s;

	i = 0;
	n = 0;
	s = 1;
	while (str[i] == '\0' || str[i] == '\n' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = n * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	return (n * s);
}
