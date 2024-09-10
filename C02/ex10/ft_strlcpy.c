/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <	bpiovano@student.42luxembour    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:07:49 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/10 16:37:56 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a])
	{
		a++;
	}
	if (size > 0)
	{
		while (b < (size - 1) && src[b])
		{
			dest[b] = src[b];
			b++;
		}
		dest[b] = '\0';
	}
	return (a);
}

/*
#include <stdio.h>

int	main(void) {
	char *src;
	char dest[0];

	src = "hello kitty";
	printf("source: %s\n", src);
	printf("before copy: %s\n", dest);
	ft_strlcpy(dest, src, 12);
	printf("after copy: %s\n", dest);
}*/
