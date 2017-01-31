/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 17:55:47 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/10 22:02:58 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *in, const char *str)
{
	char	c;
	size_t	len;
	char	sc;

	if (!(c = *(str++)))
		return ((char *)in);
	len = ft_strlen(str);
	if (!(sc = *(in++)))
		return (0);
	while (sc != c)
		if (!(sc = *(in++)))
			return (0);
	while (ft_strncmp(in, str, len) != 0)
	{
		if (!(sc = *(in++)))
			return (char *)0;
		while (sc != c)
			if (!(sc = *(in++)))
				return (0);
	}
	return (char *)(in - 1);
}
