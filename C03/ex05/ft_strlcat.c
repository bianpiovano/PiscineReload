/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:35:34 by bpiovano          #+#    #+#             */
/*   Updated: 2024/09/04 15:43:51 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	dest_length = 0;
	src_length = 0;
	i = 0;
	while (dest[dest_length] && src[src_length])
	{
		dest_length++;
		src_length++;
	}
	if (size <= dest_length)
	{
		return (size + src_length);
	}
	while (src[i] && (dest_length + 1) < (size - 1))
	{
		dest[dest_length + 1] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}

/*
#include <stdio.h>

int	main(void)
{
	char			dest[20] = "Hello, ";
	const char		*src = "world!";
	unsigned int	size;
	unsigned int	result;

	size = 20;
	result = my_strlcat(dest, src, size);
	printf("Result: %u\n", result);
	printf("Final string: '%s'\n", dest);
	return (0);
}
*/