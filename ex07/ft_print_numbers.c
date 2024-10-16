/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:39:58 by bpiovano          #+#    #+#             */
/*   Updated: 2024/10/15 13:26:23 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_number(char nb)
{
	if (nb > '9')
	{
		return ;
	}
	ft_putchar(nb);
	print_number(nb +1);
}

void	ft_print_numbers(void)
{
	print_number('0');
}
