/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 17:57:22 by srodrigu          #+#    #+#             */
/*   Updated: 2016/10/26 17:59:13 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	in;
	size_t	i;
	int		found;

	if (!*needle)
		return ((char *)haystack);
	index = -1;
	while (*(haystack + ++index) && index < len)
	{
		in = 0;
		if (*(haystack + index) == *(needle + 0))
		{
			i = index;
			found = 1;
			while (*(haystack + i) && *(needle + in) && in < len && i < len)
				if (*(haystack + i++) != *(needle + in++))
					found = 0;
			if (found && !*(needle + in))
				return ((char *)haystack + index);
		}
	}
	return (NULL);
}
