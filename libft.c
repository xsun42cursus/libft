/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:47:02 by xsun              #+#    #+#             */
/*   Updated: 2020/10/06 09:59:12 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*head;

	i = 0;
	head = b;
	while (i < len)
		*head++ = (unsigned char)(c);
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	s = ft_memset(s, 0, n);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*head;
	int				i;

	i = 0;
	head = dst;
	while (i < n)
		*head++ = *((unsigned char *)src + i);
	return (dst);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*head;
	int				i;

	i = 0;
	head = dst;
	while (i < n)
	{
		*head++ = *((unsigned char *)src + i);
		if (*(unsigned char *)src == (unsigned char)c)
			return (head);
	}
	return (NULL);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	buf[len];

	ft_memcpy((void *)buf, src, len);
	ft_memcpy(dst, buf, len);
	return (dst);
}

void	*memchr(const void *s, int c, size_t n)
{
	int				i;
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

int		memcmp(const void *s1, const void *s2, size_t n)
{
	int	diff;
	int	i;

	diff = 0;
	i = 0;
	while (i < n)
	{
		diff = *((unsigned char*)(s1) + i) - *((unsigned char*)(s2) + i);
		if (diff != 0)
			break ;
	}
	return (diff);
}
