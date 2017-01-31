/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:53:56 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/10 15:46:31 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(char *source, char *dest, unsigned length)
{
	if (source < dest)
		while (length--)
			*(dest + length) = *(source + length);
	else if (source != dest)
		while (length--)
			*(dest++) = *(source++);
}

char		*ft_strdup(char *str)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(str) + 1;
	if (!(copy = malloc((unsigned int)len)))
		return (NULL);
	ft_copy(str, copy, len);
	return (copy);
}
