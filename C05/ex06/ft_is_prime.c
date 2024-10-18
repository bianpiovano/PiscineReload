/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:26:12 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/20 10:32:37 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		while (nb % i == 0)
		{
			return (0);
			i++;
		}
		return (1);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int result1;
	int result2;

	result1 = ft_is_prime(8);
	result2 = ft_is_prime(3);

	printf("result 1 is: %d\n", result1);
	printf("result 2 is: %d\n", result2);

	return (0);
}
*/