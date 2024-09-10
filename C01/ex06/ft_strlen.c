/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:46:46 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 17:00:30 by bpiovano         ###   ########.fr       */
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
	char	str[] = "we are all tied to the ocean";
	int		length;

	length = ft_strlen(str);
	printf("length of the string \"%s\" is: %d\n", str, length);
	return (0);
}
*/