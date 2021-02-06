/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsett.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 12:55:18 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/20 15:17:54 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	cc;

	str = b;
	i = 0;
	cc = (unsigned char)c;
	while (i < len)
	{
		str[i] = cc;
		i++;
	}
	return (str);
}
