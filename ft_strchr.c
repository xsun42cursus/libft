/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:41:58 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 15:13:15 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0 || c > 255)
		return (NULL);
	if (*(unsigned char *)s == c)
		return ((char *)s);
	while (*s)
		if (*(unsigned char *)++s == c)
			return ((char *)s);
	return (NULL);
}
