/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:46:25 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:46:29 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str) 
    {
        write(1, str, 1);
        str++;
    }
}

/*
int main() 
{
    char my_string[] = "we are all tied to the ocean";
    ft_putstr(my_string);
    return 0;
}
*/