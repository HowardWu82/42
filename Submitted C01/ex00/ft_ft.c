/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:59:49 by hawu              #+#    #+#             */
/*   Updated: 2025/02/05 12:07:31 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>
int	main()
{
	int	n;

	n = 5;
	printf("Before:\tAddress of n = %p\nValue of n = %d\n\n", &n, n);
	ft_ft(&n);
	printf("After:\tAddress of n = %p\nValue of n = %d\n", &n, n);
	return('0');
}
*/
