/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:25:08 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 20:13:48 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	b;

	i = 0;
	b = (unsigned char)c;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (str[i] == b)
			return ((void*)(str + i));
		i++;
	}
	return (NULL);
}
