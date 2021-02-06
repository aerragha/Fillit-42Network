/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 18:09:56 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 21:05:00 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;
	char	*s;

	i = 0;
	s = (char*)src;
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (size < ld)
		ls = ls + size;
	else
		ls = ls + ld;
	while (s[i] != '\0' && ld + 1 < size)
	{
		dst[ld] = s[i];
		i++;
		ld++;
	}
	dst[ld] = '\0';
	return (ls);
}
