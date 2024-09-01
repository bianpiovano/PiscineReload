/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:45:28 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:45:34 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b; 
}

/*
int main() 
{
    int num1 = 10;
    int num2 = 3;
    int division;
    int modulo;
    ft_div_mod(num1, num2, &division, &modulo);
    printf("division: %d / %d = %d\n", num1, num2, division);
    printf("modulo: %d %% %d = %d\n", num1, num2, modulo);
    return 0;
}
*/