/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:25:28 by hawu              #+#    #+#             */
/*   Updated: 2025/02/11 18:43:44 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "aaa";
    char str2[] = "AAAAaaa";
    char str3[] = "";

    int result1 = ft_str_is_lowercase(str1);
    int result2 = ft_str_is_lowercase(str2);
    int result3 = ft_str_is_lowercase(str3);

    printf("Test 1 (32189421): %d\n", result1);
    printf("Test 2 (32af189421): %d\n", result2);
    printf("Test 3 (empty): %d\n", result3);

    return 0;
}
*/
