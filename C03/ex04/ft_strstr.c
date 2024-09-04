/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:39:45 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/03 20:27:23 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	a = str;
	b = to_find;
	while (true)
	{
		if (*b == '\0')
		{
			return (a - (b - to_find));
		}
		if (*a == *b)
		{
			b++;
		}
		else
			b = to_find;
		if (*a == '\0')
		{
			break ;
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello, kitty!";
	char	to_find[] = "kitty";
	char	*result;

	result = ft_strstr(str, to_find);
	if (result)
	{
		printf("string found: %s\n", result);
	}
	else
	{
		printf("string not found.\n");
	}
	return (0);
}
*/
