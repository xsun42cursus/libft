/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:28:16 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 17:08:06 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(char c)
{
	char *blacklist ="\t\n\v\f\r ";
	while(*blacklist)
		if (c == *blacklist++)
			return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while(ft_isspace(*str) && *str)
		str++;
	if (!*str)
		return (0);
	if (*str == '-' || *str == '+')
		sign = (*str++=='-') ? -1 : 1;
	value = ft_isdigit(*str) ? sign * (*str++ - '0') : 0;
	while(ft_isdigit(*str) && *str)
	{
		value *= 10;
		value += sign * (*str++ - '0');
	}
	return (value);
}
