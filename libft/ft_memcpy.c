/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:38:37 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/01 19:38:39 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest_temp;
	unsigned char	*src_temp;
	size_t			index;

	dest_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	index = -1;
	while (++index <= n && index < n)
		*dest_temp++ = *src_temp++;
	return (dst);
}
