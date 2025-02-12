/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:12:02 by hawu              #+#    #+#             */
/*   Updated: 2025/02/12 18:59:36 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************* */
#include <stdio.h>

int 	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	if ((s1[i] = '\0') || (s2[i] = '\0'))
	{
		return (1);
	}
	if (s1[i] != s2[i])
	{
		return (1);
	}
	if (s1[i] == s2[i])
	{
		i++;
	}
	return (0);
}

int	main(void)
{
	char s1[] = "abcdefg";
	char s2[] = "abcdefG";
	
	ft_strcmp(s1, s2);
	return (0);
}
