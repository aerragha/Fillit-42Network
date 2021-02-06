/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeqdar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 18:11:59 by mmeqdar           #+#    #+#             */
/*   Updated: 2018/10/18 19:24:10 by mmeqdar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int n;

	n = (unsigned int)nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * (-1);
	}
	if (n / 10 > 0)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	else
	{
		ft_putchar(n + 48);
	}
}
