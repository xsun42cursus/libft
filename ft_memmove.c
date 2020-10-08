/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:08:14 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 19:29:16 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	const char *s;

	d = (char *)dst;
	s = (const char *)src;
	if (d < s)
		while(len--)
			*d++ = *(char *)s++;
	else if (d > s)
	{
		while(len--)
			d[len] = s[len];
	}
	return (dst);
}
