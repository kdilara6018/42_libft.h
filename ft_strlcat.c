/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:01:49 by dkaratas          #+#    #+#             */
/*   Updated: 2025/05/30 17:28:27 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	i=0;
	int j;
	j=0;
	int m;
	m=1;
	while(dst[i])
	{
		i++;
	}
	while(src[j])
	{
		j++;
	}
	int k;
	k=i;
	while((size>k+1)&&src[m-1])
	{
		dst[i+m-1]=src[m-1];
		m++;
		k++;
		
	}
	dst[i+m-1]='\0';
	return i+j;
}
int main()
{
	const char src[] = "selamselamsela";
	char dst[100] = "dilara";
    size_t result;
	result = ft_strlcat(dst, src, 50);
	printf("%s\n", dst);
	printf("%ld", result);
	return 0;
}