/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:46:12 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/27 13:10:27 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    while(*str)
    {
        if (!(*str >= 'a' &&  *str <= 'z'))
        {
            return(0);
        }
        str++;
    }
    return(1);
}

/*
#include <stdio.h>

int main(int argc, char** argv)
{
    printf("testing string: %s\n", argv[1]);
    printf("result: %d\n", ft_str_is_lowercase(argv[1]));
}*/