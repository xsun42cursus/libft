/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:07:54 by xsun              #+#    #+#             */
/*   Updated: 2020/10/06 23:06:21 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*head;
	unsigned char	copy;
	size_t			i;

	i = 0;
	head = dst;
	while (i < n)
	{
		copy = *((unsigned char *)src + i++);
		*head++ = copy;
		if (copy == (unsigned char)c)
			return (head);
	}
	return (NULL);
}
