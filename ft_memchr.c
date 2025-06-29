/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:24:05 by dkaratas          #+#    #+#             */
/*   Updated: 2025/06/02 14:46:23 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    while ( n>0)
    {
        if (*ptr==(unsigned char)c)
        {
            return (void *)ptr;
        }
        
        ptr++;
        n--;
    }
    return '\0';   


}

int main()
{
    const char s1[]="dilara";
    int c='i';
    size_t n = 4;
    printf("%p",ft_memchr(s1,c,4));
}

