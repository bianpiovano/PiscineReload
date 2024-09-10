/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:52:26 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 16:35:33 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	ft_char_printable(char c)
{
	return (c >= 32 && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int		a;
	char	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (ft_char_printable(c))
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(unsigned char)c / 16]);
			ft_putchar("0123456789abcdef"[(unsigned char)c % 16]);
		}
		a++;
	}
}

/*
#include <stdio.h>

int	main(int argc, char** argv)
{
	printf("testing string: %s\n", argv[1]);
	ft_putstr_non_printable(argv[1]);
}*/