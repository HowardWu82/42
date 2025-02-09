/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:53:07 by hawu              #+#    #+#             */
/*   Updated: 2025/02/09 17:46:20 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}
/*
int	main(void)
{
	char	src[50] = "1,2,3,4,5,6,7,8,9,10,11,12"; 
	// this defines source as a char, then allocates 10 bytes to it. 
	char	dest[50];
	
	ft_strcpy(dest, src);
	printf("sourced = %s,\n", src);
	printf("destination = %s\n", dest);
	return (0);
}
*/
