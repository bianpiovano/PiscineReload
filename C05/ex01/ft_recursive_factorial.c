/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:27:15 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/17 17:58:41 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factorial(int factorial, int nb)
{
	if (nb > 0)
	{
		factorial *= nb--;
		return (ft_factorial(factorial, nb));
	}
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	return ft_factorial(1, nb);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result1;
	int	result2;

	result1 = ft_recursive_factorial(6);
	result2 = ft_recursive_factorial(9);
	printf("1st factorial is: %d\n", result1);
	printf("2nd factorial is: %d\n", result2);
}
*/
