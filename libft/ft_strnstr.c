/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:54:10 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 20:53:43 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t l;
	size_t i;
	size_t j;

	i = 0;
	l = ft_strlen(find);
	if (*find != '\0')
	{
		while (str[i] != '\0' && i < n)
		{
			if (str[i] == find[0])
			{
				j = 1;
				while (find[j] != '\0' && str[i + j] == find[j] && i + j < n)
					j++;
				if (find[j] == '\0')
					return ((char*)str + i);
			}
			i++;
		}
	}
	else
		return ((char*)str);
	return (0);
}
