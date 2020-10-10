/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:41:59 by xsun              #+#    #+#             */
/*   Updated: 2020/10/10 23:57:44 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_isinclude(const char c, const char *set)
{
	if (*set == '\0')
		return (0);
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	const char	*left;
	const char	*right;
	char		*trimed;
	size_t		len;

	if (s1 != NULL && set == NULL)
		return (ft_strdup(s1));
	else if (s1 == NULL || set == NULL)
		return (NULL);
	if ((len = ft_strlen(s1)) == 0)
		return (ft_strdup(""));
	left = s1;
	right = s1 + len - 1;
	while (ft_isinclude(*left, set) && *left)
		left++;
	while (ft_isinclude(*right, set) && right != s1)
		right--;
	if (left > right)
		return (ft_strdup(""));
	if ((trimed = malloc(sizeof(char) * (right - left + 2))) == NULL)
		return (NULL);
	ft_strlcpy(trimed, left, right - left + 2);
	return (trimed);
}
