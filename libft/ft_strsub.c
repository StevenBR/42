/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:51:02 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/02 11:51:03 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	index;

	if (!(new_str = ft_strnew(len)) || !str)
		return (NULL);
	index = 0;
	while (index < len)
		*(new_str + index++) = *(str + start++);
	return (new_str);
}
