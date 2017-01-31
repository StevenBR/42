/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 16:28:10 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/10 14:05:29 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, char *src, size_t n)
{
	char		*d;
	const char	*s;

	if (n)
	{
		d = dst;
		s = src;
		while (*d)
			d++;
		if ((*(d++) = *(s++)))
		{
			while (--n && *s)
				if (!(*(d++) = *(s++)))
					break ;
			*d = '\0';
		}
	}
	return (dst);
}
