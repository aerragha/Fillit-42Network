/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 18:58:36 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/18 19:24:36 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int n;

	n = (unsigned int)nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n = nb * (-1);
	}
	if (n / 10 > 0)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
	else
	{
		ft_putchar_fd((n + 48), fd);
	}
}
