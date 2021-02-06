/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 10:43:40 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/19 21:26:25 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;

	if (!(s))
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i != ft_strlen(s))
		while (j > 0 && ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t')))
			j--;
	return (ft_strsub(s, i, j - i + 1));
}
