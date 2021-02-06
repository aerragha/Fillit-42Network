/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:04:46 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 20:51:50 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	size_t l;
	size_t i;
	size_t j;

	i = 0;
	l = ft_strlen(find);
	if (*find != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] == find[0])
			{
				j = 1;
				while (find[j] != '\0' && str[i + j] == find[j])
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
