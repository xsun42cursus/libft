/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 12:15:35 by xsun              #+#    #+#             */
/*   Updated: 2020/10/11 18:49:08 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	char	ch[2];

	if (fd < 0)
		return ;
	if ((unsigned char)c <= 127)
		write(fd, &c, 1);
	else if ((unsigned char)c <= 255)
	{
		ch[0] = ((c & 0xc0) >> 6) | 0xc0;
		ch[1] = ((c & 0x3f) >> 0) | 0x80;
		write(fd, ch, 2);
	}
}
