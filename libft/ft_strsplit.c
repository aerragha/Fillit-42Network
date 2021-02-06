/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 12:22:56 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/11/08 11:15:14 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_substrings(const char *s, char c, size_t *j)
{
	size_t	count;
	size_t	i;
	int		splitting;

	*j = 0;
	count = 1;
	i = 0;
	splitting = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			splitting = 1;
		else if (splitting)
		{
			count++;
			splitting = 0;
		}
		i++;
	}
	return (sizeof(char *) * count);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	if (!s || !(result = ft_memalloc(num_substrings(s, c, &i))))
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			if ((len = (size_t)ft_strchr(s, c)))
			{
				result[i++] = ft_strsub(s, 0, len - (size_t)s);
				s = (const char *)len;
			}
			else
			{
				result[i++] = ft_strsub(s, 0, ft_strlen(s));
				break ;
			}
		}
	}
	return (result);
}
