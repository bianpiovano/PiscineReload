/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:24:38 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/31 17:56:46 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && j <= nb)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main() 
{
char dest[] = "Hello, ";
char src[] = "kitty!";
unsigned int nb = 3;
return (0);
}
*/