/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:41:20 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:41:24 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void) 
{
    char i;
    i = '0';

while(i <= '9') {
    write(1, &i, 1);
    i++;
    }
}

/*
int main()
{
    ft_print_numbers();
    return 0;
}
*/