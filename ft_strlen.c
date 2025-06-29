/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:26:53 by dkaratas          #+#    #+#             */
/*   Updated: 2025/05/29 15:06:36 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
int main()
{
printf("%ld",ft_strlen("30"));
}