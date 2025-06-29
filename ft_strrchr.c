/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:46:15 by dkaratas          #+#    #+#             */
/*   Updated: 2025/06/02 12:51:05 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_len(const char *str)
{
    int i;
    i=0;
    while(*str)
    {
        str++;
        i++;
    }
    return i;
}

char *ft_strrchr(const char *str, int c)
{
	int i;
    i=ft_len(str);
	while (i>=0)
    {
        if (str[i]==(char)c)
            return (char *)(str+i);
        i--;
    }

    return '\0';
}
int main()
{
	char str[] = "dilarakaratas";
	printf("%s \n",ft_strrchr(str,'r'));
	
}
