/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 19:54:49 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/20 15:34:13 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	size_t	j;
	int		p;
	char	cc;

	i = 0;
	p = 0;
	cc = (char)c;
	str = (char*)s;
	while (str[i] != '\0')
	{
		if (str[i] == cc)
		{
			j = i;
			p++;
		}
		i++;
	}
	if (p != 0)
		return (str + j);
	if (cc == '\0')
		return (str + i);
	return (NULL);
}
