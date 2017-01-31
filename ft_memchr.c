/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:38:11 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/01 19:38:12 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t size)
{
	size_t			index;
	unsigned char	*sholder;

	sholder = (unsigned char *)src;
	index = -1;
	while (++index < size)
		if (*sholder++ == (unsigned char)c)
			return (--sholder);
	return (0);
}
