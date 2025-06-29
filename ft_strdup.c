/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:36:59 by dkaratas          #+#    #+#             */
/*   Updated: 2025/06/25 15:37:12 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	j;

	tmp = malloc(ft_strlen(s) + 1);
	if (!tmp)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
	{
		tmp[j] = s[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}