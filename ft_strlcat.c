/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 16:45:23 by srodrigu          #+#    #+#             */
/*   Updated: 2016/10/19 16:45:25 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	char	*td;
	char	*ts;
	size_t	nsize;
	size_t	dlen;

	td = dest;
	ts = src;
	nsize = n;
	while (*td != '\0' && nsize-- != 0)
		td++;
	dlen = td - dest;
	nsize = n - dlen;
	if (nsize == 0)
		return (dlen + ft_strlen(ts));
	while (*ts != '\0')
	{
		if (nsize != (size_t)1)
		{
			*(td++) = *ts;
			nsize--;
		}
		ts++;
	}
	*td = '\0';
	return (dlen + (ts - src));
}
