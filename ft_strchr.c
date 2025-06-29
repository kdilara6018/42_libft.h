/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:20:24 by dkaratas          #+#    #+#             */
/*   Updated: 2025/05/30 19:41:38 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strchr(const char *str, int c)
{
	while (*str)
    {
        if (*str == (char)c)
            return (char *)str;
        str++;
    }
    if (c == '\0')
        return (char *)str;
    return '\0';
}
int main()
{
	const char str[]="dilara karatas";
	int c='t';
	printf("%s",ft_strchr(str,c));
	return 0;
}

