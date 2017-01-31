/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 00:59:14 by srodrigu          #+#    #+#             */
/*   Updated: 2016/10/19 00:59:18 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*t_dest;
	const unsigned char	*t_src;
	unsigned char		t_c;

	t_dest = dest;
	t_src = src;
	t_c = c;
	if (n)
	{
		if ((*t_dest++ = *t_src++) == t_c)
			return (t_dest);
		while (--n != 0)
		{
			if (((*t_dest++ = *t_src++) == t_c))
				return (t_dest);
		}
	}
	return (0);
}
