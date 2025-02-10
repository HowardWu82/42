/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:31:05 by hawu              #+#    #+#             */
/*   Updated: 2025/02/10 17:01:57 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	start;
	int	yesorno; 

	start = 0;
	yesorno = 1;
	while (str[start] != '\0')
	{
		if ((str[start] >= 'A' && str[start] <= 'Z') || (str[start] >= 'a' && str[start] <= 'z'))
		{
			yesorno = 1;
			write(1, &yesorno, 1);
			start++;
		}

		else
		{
			yesorno = 0;
			write(1, &yesorno, 1);
			start++;
		}
	}
	return &yesorno;
}

int	main(void)
{
	char	str[]="abcdefg";

	ft_str_is_alpha(str);
	printf("answer = %d", &yesorno);
	return(0);
}
