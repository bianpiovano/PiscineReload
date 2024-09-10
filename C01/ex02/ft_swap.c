/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:44:51 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 17:01:34 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	printf("before swap: x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("after swap: x = %d, y = %d\n", x, y);
	return (0);
}
*/