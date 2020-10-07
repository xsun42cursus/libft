/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:08:46 by xsun              #+#    #+#             */
/*   Updated: 2020/10/06 22:25:24 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*head;

	head = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)head++ == (unsigned char)c)
			return (head);
	}
	return (NULL);
}
