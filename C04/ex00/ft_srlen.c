/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:02:50 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 17:02:32 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello, kitty";
	int		length;

	length = ft_strlen(str);
	printf("length of string \"%s\" is: %d\n", str, length);
	return (0);
}
*/