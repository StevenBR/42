/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:52:45 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/02 11:52:46 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		index;

	if (!str)
		return (NULL);
	new_str = ft_strnew(ft_strlen(str));
	if (!new_str)
		return (NULL);
	index = -1;
	while (*(str + ++index))
		*(new_str + index) = f(index, *(str + index));
	return (new_str);
}
