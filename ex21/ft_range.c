/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:30:52 by bpiovano          #+#    #+#             */
/*   Updated: 2024/10/14 19:51:49 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	if (range == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
