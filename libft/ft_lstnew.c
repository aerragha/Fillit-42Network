/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 11:40:35 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/20 11:14:33 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*p;

	if (!(p = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		p->content = NULL;
		p->content_size = 0;
	}
	else
	{
		if (!(p->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(p->content, content, content_size);
		p->content_size = content_size;
	}
	p->next = NULL;
	return (p);
}
