/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:44:54 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 15:15:38 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;

	i = 0;
	while(i < dstsize && *dst)
	{
		i++;
		dst++;
	}
	if (*dst)
		return (dstsize + ft_strlen(src));
	while (i + 1 < dstsize)
	{
		++i;
		*dst++ = *src++;
	}
	*dst = '\0';
	return (i + ft_strlen(src));
}
