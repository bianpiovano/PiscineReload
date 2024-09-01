/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:40:33 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:40:38 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void) 
{
    char c;
    c = 'z';

while(c >= 'a') {
    write(1, &c, 1);
    c--;
    }
}

/*
int main()
{
    ft_print_reverse_alphabet();
    return 0;
}
*/