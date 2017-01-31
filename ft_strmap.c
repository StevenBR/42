/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:00:35 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/02 15:00:36 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*new_str;
	int		index;

	if (!str || !(new_str = ft_strnew(ft_strlen(str))))
		return (NULL);
	index = -1;
	while (*(str + ++index))
		*(new_str + index) = f(*(str + index));
	return (new_str);
}
