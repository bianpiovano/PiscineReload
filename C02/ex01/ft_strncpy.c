/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:29:19 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:06:06 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	dest[11];

	src "hello kitty";
	printf("source: %s\n", src);
	printf("before copy: %s\n", dest);
	ft_strncpy(dest, src, 10);
	printf("after copy: %s\n", dest);
	return (0);
}
*/
