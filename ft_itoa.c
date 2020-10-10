/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 01:05:44 by xsun              #+#    #+#             */
/*   Updated: 2020/10/10 23:45:52 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_getstrrev(const char *s)
{
	char	*rev;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	if ((rev = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rev[i] = s[len - i - 1];
		i++;
	}
	rev[len] = '\0';
	return (rev);
}

char		*ft_itoa(int n)
{
	unsigned int	un;
	char			tmp[64];
	char			sign;
	size_t			cnt;

	sign = 1;
	if (n < 0)
		sign = -1;
	un = sign > 0 ? n : n * (-1);
	if (n == 0)
		return (ft_strdup("0"));
	cnt = 0;
	while (un)
	{
		tmp[cnt++] = un % 10 + '0';
		un /= 10;
	}
	if (sign == -1)
		tmp[cnt++] = '-';
	tmp[cnt] = '\0';
	return (ft_getstrrev(tmp));
}
