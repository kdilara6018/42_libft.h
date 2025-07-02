/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:01:49 by dkaratas          #+#    #+#             */
/*   Updated: 2025/07/02 17:38:22 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	m;
	size_t	k;

	i = 0;
	j = 0;
	m = 1;
	while (dst[i])
	{
		i++;
	}
	while (src[j])
	{
		j++;
	}
	k = i;
	while ((size > (k + 1)) && src[m - 1])
	{
		dst[i + m - 1] = src[m - 1];
		m++;
		k++;
	}
	dst[i + m - 1] = '\0';
	return (i + j);
}
