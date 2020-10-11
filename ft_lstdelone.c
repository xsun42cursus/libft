/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:40:25 by xsun              #+#    #+#             */
/*   Updated: 2020/10/12 01:39:09 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst->content)
	{
		del(lst->content);
		lst->content = NULL;
	}
	if (lst != NULL)
		lst->next = NULL;
	free(lst);
}
