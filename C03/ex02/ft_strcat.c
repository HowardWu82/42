/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:10:35 by hawu              #+#    #+#             */
/*   Updated: 2025/02/13 18:54:23 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;
	
	i = 0;
	i2 = 0;
	while (dest[i]!= '\0')
	{
		i++;
	}
	while (src[i] != '\0')
	{
		dest[i + 1] = dest[i2];
		dest[i2] = src[i];
		i2++;
		i++;
	}
	return (dest);
}

int	main(void)
{
	char src[] = "Hello,";
	char dest[] = " World!";
	
	printf("this should print the answer = %s", ft_strcat(dest, src));
	return (0);
}
