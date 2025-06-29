/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:38:50 by dkaratas          #+#    #+#             */
/*   Updated: 2025/06/02 15:45:00 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 && (*s1==*s2) && n>1)
    {
        s1++;
        s2++;
        n--;
    }
    return *s1-*s2;   
}
int main(){
    const char s1[]="dilara";
    const char s2 []="dilra";
    size_t n = 4;
    printf("%d",ft_strncmp(s1,s2,n));
}