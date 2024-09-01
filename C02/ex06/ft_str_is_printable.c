/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:28:49 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/22 14:52:42 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	while (true)
	{
		if (*str == '\0')
		{
			break ;
		}
		if (*str < 32 || *str == 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(int argc, char** argv)
{
	printf("testing string: %s\n", argv[1]);
	printf("result: %d\n", ft_str_is_printable(argv[1]));
}*/