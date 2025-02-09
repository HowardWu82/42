/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:12:43 by hawu              #+#    #+#             */
/*   Updated: 2025/02/09 18:44:09 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	start;
	start = 0;

	while(start <= n && start != '\0')
	{
		src[start]=dest[start];
		start++;
	}
	return(dest);
}

int	main(void)
{
	char	src[50] = "Hello, World!";
	unsigned int	n;
	char	dest[50];	
	n = 5;
	
	ft_strncpy(src, dest, n);
	printf("the source is %s\n", src);
	printf("the destination is %c\n", dest);
	printf("the n number was set to %d", n);
	return (0);
}


