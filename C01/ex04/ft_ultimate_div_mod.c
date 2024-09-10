/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:45:56 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 17:01:16 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}

/*
#include <stdio.h>

int	main(void)
{
int		a = 37;
int		b = 6;

printf("before ft_ultimate_div_mod:\n");
printf("a = %d, b = %d\n", a, b);
ft_ultimate_div_mod(&a, &b);
printf("after ft_ultimate_div_mod:\n");
printf("a = %d, b = %d\n", a, b);
return (0);
}
*/