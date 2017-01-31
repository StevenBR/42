/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 15:25:51 by srodrigu          #+#    #+#             */
/*   Updated: 2016/11/10 14:36:52 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(char str)
{
	if (str == '\n' ||
	str == '\t' ||
	str == '\r' ||
	str == '\v' ||
	str == '\f' ||
	str == ' ')
		return (1);
	return (0);
}

static int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int index;
	int sign;
	int result;

	result = 0;
	sign = 1;
	index = 0;
	while (ft_space(*(str + index)))
		++index;
	if (*(str + index) == '-')
	{
		sign = -1;
		index++;
	}
	else if (*(str + index) == '+')
		index++;
	if (!ft_isnum(*(str + index)))
		return (0);
	while (*(str + index) && ft_isnum(*(str + index)))
		result = result * 10 + *(str + index++) - '0';
	return (sign * result);
}
