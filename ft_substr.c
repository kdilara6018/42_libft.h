/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_ft_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:55:05 by dkaratas          #+#    #+#             */
/*   Updated: 2025/06/25 15:55:07 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*temp;
	size_t			temp_len;

	temp_len = 0;
	i = 0;
	if (start >= ft_strlen(s))
	{
		temp = ft_strdup("");
		return (temp);
	}
	if (ft_strlen(s) - start < len)
		temp_len = ft_strlen(s) - start;
	else
		temp_len = len;
	temp = malloc(temp_len +1);
	if (!temp)
		return (NULL);
	while (i < temp_len && s[start + i] != '\0')
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}