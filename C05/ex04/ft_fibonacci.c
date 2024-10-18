/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:21:06 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/17 21:44:29 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
    return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int main()
{
    int result1;
    int result2;

    result1 = ft_fibonacci(7);
    result2 = ft_fibonacci(3);

	printf("fibonacci of 7 is: %d\n", result1);
    printf("fibonacci of 3 is: %d\n", result2);
}
*/