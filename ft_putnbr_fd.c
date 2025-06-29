/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_ft_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:03:08 by dkaratas          #+#    #+#             */
/*   Updated: 2025/06/25 17:03:11 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		c = (n + '0');
		write(fd, &c, 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		c = (n % 10 + '0');
		write(fd, &c, 1);
	}
}