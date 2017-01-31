/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 17:40:19 by srodrigu          #+#    #+#             */
/*   Updated: 2016/10/19 17:40:21 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *cp, int c)
{
	int len;

	len = ft_strlen(cp) + 1;
	while (len--)
		if (*(cp + len) == c)
			return ((char *)cp + len);
	return (NULL);
}
