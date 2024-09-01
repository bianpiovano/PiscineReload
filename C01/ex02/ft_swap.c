/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:44:51 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:44:55 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

/*
int main() 
{
    int x = 1;
    int y = 2;
    printf("before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("after swap: x = %d, y = %d\n", x, y);
    return 0;
}
*/