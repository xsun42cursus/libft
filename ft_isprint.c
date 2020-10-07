/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:20:33 by xsun              #+#    #+#             */
/*   Updated: 2020/10/08 00:37:36 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	char	start_print;
	char	end_print;

	start_print = ' ';
	end_print = '~';
	if (start_print <= c && c <= end_print)
		return (1);
	return (0);
}
