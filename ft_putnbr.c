/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:23:06 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/10 15:40:26 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putpositive(long nb)
{
	if (nb >= 10)
	{
		putpositive(nb / 10);
	}
	nb = (nb % 10 + 48);
	write(1, &nb, 1);
}

void		ft_putnbr(int num)
{
	long temp;

	temp = num;
	if (num < 0)
	{
		write(1, "-", 1);
		temp = -temp;
	}
	putpositive(temp);
}
