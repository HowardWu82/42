/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:46:06 by hawu              #+#    #+#             */
/*   Updated: 2025/02/11 18:54:40 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
    char str1[] = "ABC";
    char str2[] = "ABXxcfd";
    char str3[] = "";

    int result1 = ft_str_is_uppercase(str1);
    int result2 = ft_str_is_uppercase(str2);
    int result3 = ft_str_is_uppercase(str3);

    printf("Test 1 (32189421): %d\n", result1);
    printf("Test 2 (32af189421): %d\n", result2);
    printf("Test 3 (empty): %d\n", result3);

    return 0;
}
*/
