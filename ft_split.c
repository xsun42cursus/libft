/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 22:35:43 by xsun              #+#    #+#             */
/*   Updated: 2020/10/11 00:02:36 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static const char	*skip(char const *s, const char c)
{
	while (*s)
	{
		if (*s != c)
			break ;
		s++;
	}
	return (s);
}

static const char	*next(char const *s, const char c)
{
	while (*s)
	{
		if (*s == c)
			break ;
		s++;
	}
	return (s);
}

static size_t		calc_size(char const *s, const char c)
{
	size_t size;

	size = 0;
	if (!*(s = skip(s, c)))
		return (0);
	while (*s)
	{
		if (*s++ == c)
		{
			s++;
			size++;
		}
	}
	return (++size);
}

static char			**free_all(char **pp)
{
	char **head;

	head = pp;
	if (pp != NULL)
	{
		while (*head)
		{
			if (*head != NULL)
				free(*head);
			head++;
		}
		free(pp);
	}
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	size_t		size;
	const char	*head;
	char		**split;
	char		**split_head;

	if (s == NULL)
		return (NULL);
	size = calc_size(s, c);
	if ((split = (char **)malloc(sizeof(char *) * (size + 1))) == NULL)
		return (NULL);
	split_head = split;
	s = skip(s, c);
	while (*s)
	{
		head = next(s, c);
		if ((*split_head = (char *)malloc(sizeof(char) * (head - s + 1))) == NULL)
			return (free_all(split));
		ft_strlcpy(*split_head, s, head - s + 1);
		split_head++;
		s = skip(head, c);
	}
	*split_head = NULL;
	return (split);
}
