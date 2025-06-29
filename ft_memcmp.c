/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:50:19 by dkaratas          #+#    #+#             */
/*   Updated: 2025/06/02 16:02:46 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
size_t ft_strlen(const char *s)
{
	size_t i;
	i=0;
	while(*s)
	{
		s++;
		i++;
	}
	return i;
}
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *k1=(const unsigned char *)s1;
    const unsigned char *k2=(const unsigned char *)s2;
     while ( *k1 &&(*k1==*k2) && n>0)
    {
        k1++;
        k2++;
        n--;
    }
    return *k1-*k2;  
}
int main()
{
    const unsigned char k1[]="€dddddd";
    const unsigned char k2[]="dddddd";
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {256, 4, 5, 4, 5};

    printf("%d\n",ft_memcmp(k1,b,4));
    return 0;
}
