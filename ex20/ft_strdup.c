/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:13:38 by bpiovano          #+#    #+#             */
/*   Updated: 2024/10/15 18:29:55 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*duplicate;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	while (i < length)
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
