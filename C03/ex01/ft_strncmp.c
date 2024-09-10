/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:56:15 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 16:58:29 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && (*s1 == *s2) && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "HelloWorld";
	char str2[] = "HelloThere";
	char str3[] = "Hello";
	char str4[] = "HelloWorld";

	int result1 = ft_strncmp(str1, str2, 5);
	printf("result 1: %d\n", result1);

	int result2 = ft_strncmp(str1, str2, 10);
	printf("result 2: %d\n", result2);
*/
