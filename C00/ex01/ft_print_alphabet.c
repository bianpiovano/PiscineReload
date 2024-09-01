/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:40:03 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:40:08 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void) 
{
    char c;
    c = 'a';

while(c <= 'z') {
    write(1, &c, 1);
    c++;
    }
}

/*
int main() {
    ft_print_alphabet();
    return 0;
}
*/