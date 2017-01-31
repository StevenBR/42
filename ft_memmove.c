/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:39:02 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/01 19:39:03 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*sp;
	char	*dp;
	size_t	index;

	index = -1;
	sp = (char *)src;
	dp = (char *)dest;
	if (sp < dp)
		while ((int)(--n) >= 0)
			*(dp + n) = *(sp + n);
	else
		while (++index < n)
			*(dp + index) = *(sp + index);
	return (dest);
}
