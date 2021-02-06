/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 15:13:59 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/20 15:22:05 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == cc)
			return ((void*)d + i + 1);
		i++;
	}
	return (NULL);
}
