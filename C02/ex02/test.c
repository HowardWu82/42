/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:31:05 by hawu              #+#    #+#             */
/*   Updated: 2025/02/11 15:03:35 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	start;
	int	answer;

	start = 0;
	answer = 1;
	while (str[start] != '\0')
	{
		if ((str[start] >= 'A' && str[start] <= 'Z')
			|| (str[start] >= 'a' && str[start] <= 'z'))
		{
			yesorno = 1;
			start++;
		}
		else
		{
			answer = 0;
			start++;
		}
	}
	return (answer);
}
/*
int	main(void)

{
	char	str[] = "abcdefg";
	char	str3[] = "";
	char	str2[] = "afdsg9324";
	
	printf("answer = %d", ft_str_is_alpha(str));
	printf("answer = %d", ft_str_is_alpha(str3));
	printf("answer = %d", ft_str_is_alpha(str2));
	return(0);
}
*/
