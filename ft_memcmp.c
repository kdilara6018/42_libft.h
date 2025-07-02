/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:50:19 by dkaratas          #+#    #+#             */
/*   Updated: 2025/07/02 18:35:51 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*k1;
	unsigned char	*k2;

	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (k1[i] != k2[i])
			return (k1[i] - k2[i]);
		i++;
	}
	return (0);
}
