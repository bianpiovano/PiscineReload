/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:12:49 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/20 19:38:39 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	dest[50];

	src = "hello kitty";
	printf("source: %s\n", src);
	printf("before copy: %s\n", dest);
	ft_strcpy(dest, src);
	printf("after copy: %s\n", dest);
}
*/