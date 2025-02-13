/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:42:06 by hawu              #+#    #+#             */
/*   Updated: 2025/02/13 16:54:20 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	unsigned int	n;
	char s1[] = "abcd";
	char s2[] = "abcdefg";
	
	n = 2;
	
	printf("answer = %d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
