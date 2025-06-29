/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yapilandirilicak_ft_bzero.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaratas <dkaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:37:15 by dkaratas          #+#    #+#             */
/*   Updated: 2025/05/30 18:04:46 by dkaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h> 
 
void ft_bzero(void *s, size_t n)
{
	unsigned char *ptr=(unsigned char *)s;
	size_t i;
	i=0;
	
	while(n>i)
	{
		ptr[i] = '\0';
		i++;
	}
}
int main()
{
	char array[10];
	for(int i=0;i<10;i++)
	{
		array[i]='A'+i;
	}
	printf("bzerodan önce : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%c", array[i]);
	}
	printf("\n");
	ft_bzero(array,8);
		printf("bzerodan sonra : ");
	for (int i=0;i<10;i++)
	{
		printf("%c", array[i]);
	}
	return 0;
	
}