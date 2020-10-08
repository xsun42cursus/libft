/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 22:16:44 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 15:36:30 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;

	len = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (i + 1 < dstsize && *src)
		{
			*dst++ = *src++;
			++i;
		}
		*dst = '\0';
	}
	return (len);
}
