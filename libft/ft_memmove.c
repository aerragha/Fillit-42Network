/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 15:40:00 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 20:12:48 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
