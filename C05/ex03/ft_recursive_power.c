/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:00:18 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/17 18:26:22 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	else
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*
#include <stdio.h>

int main()
{
    int result1;
    int result2;

    result1 = ft_recursive_power(7, 3);
    result2 = ft_recursive_power(9, 6);

	printf("result 1 is: %d\n", result1);
    printf("result 2 is: %d\n", result2);
}
*/
