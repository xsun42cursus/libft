/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:06:24 by xsun              #+#    #+#             */
/*   Updated: 2020/10/07 22:49:28 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t len)
{
	char *d = dest;
	const char *s = src;
	while (len--)
		*d++ = *s++;
	return dest;
}

//void	*ft_memcpy(void *dst, const void *src, size_t n)
//{
//	//unsigned char		*head_dst;
//	//const unsigned char	*head_src;
//	//size_t				i;
//
//	char *d = dst;
//	const char *s = src;
//
//	while(n--)
//		*d++ = *s++;
//
//	return dst;
//
//
//	//i = -1;
//	//head_dst = dst;
//	//head_src = src;
//	//while (++i < n)
//	//while (n--)
//	//{
//	//	*head_dst++ = *head_src++;
//	//}
//	//return (dst);
//}
