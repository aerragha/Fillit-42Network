/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 09:34:41 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/20 16:15:53 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s != '\0')
	{
		if ((str = (char*)malloc(ft_strlen(s) + 1)))
		{
			while (s[i] != '\0')
			{
				str[i] = f(i, s[i]);
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
