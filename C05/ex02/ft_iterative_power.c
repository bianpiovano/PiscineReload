/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:15:23 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/17 17:57:45 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

/*
#include <stdio.h>

int main ()
{
	int	result1;
	int	result2;

	result1 = ft_iterative_power(7, 3);
	result2 = ft_iterative_power(9, 6);
	printf("result 1 is: %d\n", result1);
	printf("result 2 is: %d\n", result2);
}
*/