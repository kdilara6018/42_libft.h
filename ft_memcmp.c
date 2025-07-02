/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:50:19 by dkaratas          #+#    #+#             */
/*   Updated: 2025/07/02 17:37:05 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*k1;
	unsigned char	*k2;

	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	while (*k1 && (*k1 == *k2) && n > 0)
	{
		k1++;
		k2++;
		n--;
	}
	return (*k1 - *k2);
}
