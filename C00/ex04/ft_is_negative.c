/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:41:44 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:41:49 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n) 
{
    if (n < 0)
    {
        write(1, "P", 1);
    }
    else 
    {
        write(1, "N", 1);
    }
}

/*
int main()
{
    ft_is_negative(-4);
    ft_is_negative(4);
    ft_is_negative(-7);
    ft_is_negative(7);
}
*/