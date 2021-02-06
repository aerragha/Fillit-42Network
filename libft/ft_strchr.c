/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 19:04:54 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/20 15:33:25 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	cc;

	i = 0;
	cc = (char)c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == cc)
			return (str + i);
		i++;
	}
	if (cc == '\0')
		return (str + i);
	return (NULL);
}
