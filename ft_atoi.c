/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:35:09 by dkaratas          #+#    #+#             */
/*   Updated: 2025/07/02 17:44:24 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*cast;
	int		sign;
	int		result;
	int		i;

	i = 0;
	result = 0;
	sign = 1;
	cast = (char *)nptr;
	while ((cast[i] >= 9 && cast[i] <= 13) || cast[i] == 32)
		i++;
	if (cast[i] == '-' || cast[i] == '+')
	{
		if (cast[i] == '-')
			sign *= -1;
		i++;
	}
	while (cast[i] >= '0' && cast[i] <= '9')
	{
		result = (result * 10) + (cast[i] - 48);
		i++;
	}
	result *= sign;
	return (result);
}
