/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:06:24 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 19:00:14 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t len)
{
	char *d = dest;
	const char *s = src;
	if (len == 0 || d == s)
		return (dest);
	while (len--)
		*d++ = *s++;
	return (dest);
}
