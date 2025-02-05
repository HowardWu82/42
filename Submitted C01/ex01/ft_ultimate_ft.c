/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawu <hawu@student hawu@student.42ade      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:52:06 by hawu              #+#    #+#             */
/*   Updated: 2025/02/05 12:06:25 by hawu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
int	main()
{
//the int variable also needs to be 9 levels deep in 
//order to match the same level of pointers in the ft_ultimate_ft.
	int	n;
	int *ptr1 = &n;
    	int **ptr2 = &ptr1;
    	int ***ptr3 = &ptr2;
    	int ****ptr4 = &ptr3;
    	int *****ptr5 = &ptr4;
    	int ******ptr6 = &ptr5;
    	int *******ptr7 = &ptr6;
    	int ********ptr8 = &ptr7;
    	int *********ptr9 = &ptr8;
	
	n = 5;
	printf("Before:\tAddress of n = %p\nValue of n = %d\n\n", &n, n);
	ft_ultimate_ft(ptr9);
	printf("After:\tAddress of n = %p\nValue of n = %d\n", &n, n);
	return(0);
}
*/
