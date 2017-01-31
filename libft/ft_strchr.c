/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:54:25 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/02 11:54:25 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char ch;

	ch = c;
	while (*str != ch)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}