/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:07:48 by dkaratas          #+#    #+#             */
/*   Updated: 2025/07/02 17:48:03 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	int				i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = n - 1;
	if (src > dest)
	{
		ft_memcpy(ptr_dest, ptr_src, n);
	}
	else if (dest > src)
	{
		while (i >= 0)
		{
			ptr_dest[i] = ptr_src[i];
			if (i == 0)
				return (dest);
			i--;
		}
	}
	return (dest);
}
