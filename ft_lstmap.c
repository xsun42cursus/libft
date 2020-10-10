/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:00:13 by xsun              #+#    #+#             */
/*   Updated: 2020/10/10 23:48:27 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_lstclearbylst(t_list *l, void (*del)(void *))
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

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;
	t_list	*head_map;
	t_list	*head;

	if (!lst)
		return (NULL);
	head = lst;
	head_map = NULL;
	if (head)
	{
		if (head->content)
			if ((head_map = ft_lstnew(f(head->content))) == NULL)
				return (NULL);
		head = head->next;
	}
	mapped = head_map;
	while (head)
	{
		if (head->content)
		{
			if ((head_map->next = ft_lstnew(f(head->content))) == NULL)
			{
				ft_lstclearbylst(mapped, del);
				return (NULL);
			}
		}
		head = head->next;
		head_map = head_map->next;
	}
	return (mapped);
}
