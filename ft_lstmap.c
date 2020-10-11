/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:00:13 by xsun              #+#    #+#             */
/*   Updated: 2020/10/11 00:26:20 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_lstclearbylst(t_list *l, void (*del)(void *))
{
	t_list *tmp;

	tmp = l;
	while (l)
	{
		tmp = l->next;
		del(l);
		l = tmp;
	}
}

static int		ft_map(t_list *dst, t_list *src, void *(*f)(void *))
{
	while (src)
	{
		if (src->content)
			if ((dst->next = ft_lstnew(f(src->content))) == NULL)
				return (-1);
		src = src->next;
		dst = dst->next;
	}
	return (0);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;

	if (!lst)
		return (NULL);
	mapped = NULL;
	if (lst)
	{
		if (lst->content)
			if ((mapped = ft_lstnew(f(lst->content))) == NULL)
				return (NULL);
		lst = lst->next;
	}
	if (ft_map(mapped, lst, f) == -1)
	{
		ft_lstclearbylst(mapped, del);
		return (NULL);
	}
	return (mapped);
}
