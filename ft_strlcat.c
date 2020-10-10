/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:44:54 by xsun              #+#    #+#             */
/*   Updated: 2020/10/11 00:03:09 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (i + 1 < dstsize && *dst)
	{
		i++;
		dst++;
	}
	if (*dst)
		return (dstsize + ft_strlen(src));
	while (i + 1 < dstsize && *src)
	{
		++i;
		*dst++ = *src++;
	}
	*dst = '\0';
	return (i + ft_strlen(src));
}
