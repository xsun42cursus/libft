/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:50:59 by xsun              #+#    #+#             */
/*   Updated: 2020/10/10 23:56:25 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *find;
	char *head;

	find = ft_strchr(s, c);
	head = find;
	if (find == NULL || c == '\0')
		return (find);
	while (head != NULL)
		if ((head = ft_strchr(head, c)) != NULL)
			find = head++;
	return (find);
}
