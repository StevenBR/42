/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 17:37:01 by srodrigu          #+#    #+#             */
/*   Updated: 2016/09/26 15:45:33 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	int digits;
	int d_convert;

	digits = 0;
	d_convert = d - '0';
	while (digits <= 9)
		if (d_convert == digits)
			return (1);
		else
			digits++;
	return (0);
}
