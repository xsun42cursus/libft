/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:28:16 by xsun              #+#    #+#             */
/*   Updated: 2020/10/11 21:22:31 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(char c)
{
	char *blacklist;

	blacklist = "\t\n\v\f\r ";
	while (*blacklist)
		if (c == *blacklist++)
			return (1);
	return (0);
}

static int	is_over(unsigned long acc, int dig, unsigned long max_p, int max_r)
{
	if (acc == max_p && dig > max_r)
		return (1);
	else if (acc > max_p)
		return (1);
	return (0);
}

static int	iterate(unsigned long *value, int sign, const char *str)
{
	unsigned long	cutoff;
	int				cutlim;
	int				over;

	over = 0;
	cutoff = sign < 0 ? -(unsigned long)LONG_MIN : LONG_MAX;
	cutlim = cutoff % 10;
	cutoff /= 10;
	*value = sign * (ft_isdigit(*str) ? sign * (*str++ - '0') : 0);
	while (ft_isdigit(*str) && *str)
	{
		if (!over)
			over = is_over(*value, (*str - '0'), cutoff, cutlim);
		*value *= 10;
		*value += (*str++ - '0');
	}
	return (over);
}

int			ft_atoi(const char *str)
{
	unsigned long	value;
	int				sign;
	int				over;

	value = 0;
	sign = 1;
	while (ft_isspace(*str) && *str)
		str++;
	if (!*str)
		return (0);
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	over = iterate(&value, sign, str);
	if (over)
		return ((int)(sign == -1 ? LONG_MIN : LONG_MAX));
	return ((int)(sign == -1 ? -value : value));
}
