/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:47:11 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:47:17 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = size - 1;
	while (i < size / 2)
	{
		b = tab[i];
		tab[i] = tab[a];
		tab[a] = b;
		i++;
		a--;
	}
}

/*
#include <stdio.h>
int main() {
    int array[] = {7, 3, 4, 6, 2};
    int size = 5;
    ft_rev_int_tab(array, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
*/