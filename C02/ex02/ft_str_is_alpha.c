/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:37:10 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/21 17:22:26 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    char    c;
 
    while ((c = *str))
    {
        if ((!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z')))
        {
            return (0);
        }
        str++;
    }
    return(1);
}

/*
#include <stdio.h>

int main(int argc, char** argv)
{
    printf("string: %s\n", argv[1]);
    printf("result: %d\n", ft_str_is_alpha(argv[1]));
}
*/
