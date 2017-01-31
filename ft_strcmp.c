/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:07:47 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/10 22:25:32 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *c, const char *d)
{
	while (*c == *d)
	{
		if (*c == '\0' || *d == '\0')
			break ;
		c++;
		d++;
	}
	return (*(unsigned const char*)c - *(unsigned const char*)d);
}
