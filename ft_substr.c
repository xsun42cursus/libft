/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 20:46:11 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 22:16:17 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	char *head;

	if (s == NULL)
		return (NULL);
	while(start-- && *s)
		s++;
	if (!*s)
		return (ft_strdup(""));
	if ((sub = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	head = sub;
	while(len--)
		*head++ = *s++;
	*head = '\0';
	return (sub);
}
