/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:45:47 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 20:14:21 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*ss1;
	unsigned char		*ss2;

	i = 0;
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (i < n && (ss1 != '\0' || ss2[i] != '\0'))
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
