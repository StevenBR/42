/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 16:06:37 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/11 13:59:05 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((0 < n--) && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break ;
		if (n > 0)
		{
			s1++;
			s2++;
		}
	}
	return (*(unsigned const char*)s1 - *(unsigned const char*)s2);
}
