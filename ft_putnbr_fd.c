/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsun <xiaobai@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 12:15:35 by xsun              #+#    #+#             */
/*   Updated: 2020/10/11 00:01:51 by xsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void		ft_unsignednbr_fd(unsigned int un, int sign, int fd)
{
	char			tmp[32];
	size_t			cnt;

	cnt = 0;
	while (un)
	{
		tmp[cnt++] = un % 10 + '0';
		un /= 10;
	}
	if (sign == -1)
		tmp[cnt++] = '-';
	while (cnt--)
		write(fd, &tmp[cnt], 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	int				sign;

	if (n == 0)
		write(fd, "0", 1);
	if (fd < 0 || n == 0)
		return ;
	un = n > 0 ? n : n * (-1);
	sign = n > 0 ? 1 : -1;
	ft_unsignednbr_fd(un, sign, fd);
}
