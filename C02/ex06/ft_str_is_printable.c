/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:05:02 by hawu              #+#    #+#             */
/*   Updated: 2025/02/11 19:39:49 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 33 && str[i] <= 126))
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
    char str1[] = "fdsfs";
    char str2[] = "\t";
    char str3[] = "";

    int result1 = ft_str_is_printable(str1);
    int result2 = ft_str_is_printable(str2);
    int result3 = ft_str_is_printable(str3);

    printf("Test 1 (32189421): %d\n", result1);
    printf("Test 2 (32af189421): %d\n", result2);
    printf("Test 3 (empty): %d\n", result3);

    return 0;
}
*/
