/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:49:52 by xsun              #+#    #+#             */
/*   Updated: 2020/10/10 23:20:23 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t hay_len;
	size_t needle_len;
	size_t range;
	size_t i;

	hay_len = ft_strlen(haystack);
	hay_len = hay_len < len ? hay_len : len;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (hay_len >= needle_len)
		range = hay_len - needle_len;
	else
		return (NULL);
	i = 0;
	while (i < range + 1 && i < len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		++haystack;
		++i;
	}
	return (NULL);
}
