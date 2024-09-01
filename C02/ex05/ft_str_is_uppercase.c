/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 23:22:06 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/27 13:10:47 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str) 
{
while(*str)
{
    if(!(*str >= 'A' && *str <= 'Z'))
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
    printf("result: %d\n", ft_str_is_uppercase(argv[1]));
}*/