/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:44:30 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/30 13:54:16 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src)
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[50] = "hello ";
	char	src[] = "kitty";

	printf("before ft_strcat:\n");
	printf("dest = \"%s\"\n", dest);
	printf("src = \"%s\"\n\n", src);
	ft_strcat(dest, src);
	printf("after ft_strcat:\n");
	printf("dest = \"%s\"\n", dest);
	return (0);
}
*/
