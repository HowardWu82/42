/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:31:05 by hawu              #+#    #+#             */
/*   Updated: 2025/02/10 15:26:05 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	start;
	int	yesorno; 

	start = '0';
	
	while (start < '\0')
	{
		if (str[start] >= 'A' && str[start] <= 'Z' || str[start] >= 'a' && str[start] <= 'z' || str[start] = '\0')
		{
			yesorno = '1';
			write(1, &yesorno, 1);
		}

		else
		{
			yesorno = '0';
			write(1, &yesorno, 1);
		}
	}
	return(&yesorno)
}

int	main(yesorno)
{
	char	str[]="abcdefg";

	ft_str_is_alpha(str);
	printf("answer = %d", yesorno);
	return(0);
}
