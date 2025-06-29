/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:13:04 by dkaratas          #+#    #+#             */
/*   Updated: 2025/05/30 16:00:32 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;
	i=0;
	while(i<size)
	{
		dst[i]=src[i];
		i++;
	}
	dst[i]='\0';
	return (0);
}
int main()
{
	char dst[20];
	char src[]="selam merhaba ?";
	ft_strlcpy(dst,src,25);
	printf("%s",dst);
}