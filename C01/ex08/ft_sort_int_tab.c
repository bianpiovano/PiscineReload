/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:47:38 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 18:08:43 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < size - 1)
	{
		b = 0;
		while (b < size - 1 - a)
		{
			if (tab[b] > tab[b + 1])
			{
				c = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = c;
			}
			b++;
		}
		a++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {2, 0, 3, 4};
	int	size;

	size = 4;
	ft_sort_int_tab(array, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return (0);
}
*/
