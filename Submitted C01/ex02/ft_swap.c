/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:49:05 by hawu              #+#    #+#             */
/*   Updated: 2025/02/05 13:49:26 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main()
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	
	printf("a = %d", a);
	printf("b = %d", b);
	ft_swap(&a, &b);
	printf("a = %d", a);
	printf("b = %d", b);
	return(0);
}
*/
