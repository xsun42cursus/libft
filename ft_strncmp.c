/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:48:45 by xsun              #+#    #+#             */
/*   Updated: 2020/10/10 23:56:14 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	diff = 0;
	i = 0;
	while (i < n && (*s1 || *s2))
	{
		++i;
		diff = *(unsigned char *)s1++ - *(unsigned char *)s2++;
		if (diff != 0)
			break ;
	}
	return (diff);
}
