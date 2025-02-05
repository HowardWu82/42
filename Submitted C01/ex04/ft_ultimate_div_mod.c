/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:03:27 by hawu              #+#    #+#             */
/*   Updated: 2025/02/05 16:45:34 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ans;

	ans = *a / *b;
	*b = *a % *b;
	*a = ans;
}

/*
int	main(void)
{
	int     a;
        int     b;

	a = 15;
	b = 3; 

	printf("print a = %d\n", a);
	printf("print b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("print the answer of division = %d", a);
	printf("print the remainder solution = %d", b);
	return(0);
}
*/
