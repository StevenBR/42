/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:39:16 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/01 19:39:18 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t length)
{
	size_t			index;
	unsigned char	*res;

	res = (unsigned char*)str;
	index = -1;
	while (++index < length)
		*(res + index) = c;
	return (str);
}
