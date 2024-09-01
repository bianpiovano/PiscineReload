/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <bpiovano@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:31:49 by bpiovano          #+#    #+#             */
/*   Updated: 2024/08/23 19:04:25 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_letter(char c)
{
	if ((!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && (!(c >= '0'
					&& c <= '9'))))
	{
		return (1);
	}
	return (0);
}

char	ft_change_case(char c, int b)
{
	if (c >= 'a' && c <= 'z' && b == '0')
	{
		return (c - 32);
	}
	if (c >= 'A' && c <= 'Z' && b == '1')
	{
		return (c + 32);
	}
	return (c);
}

void	str_to_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_change_case(str[i], '1');
		i++;
	}
}

void	str_capitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0])
		str[0] = ft_change_case(str[0], '0');
	while (str[i])
	{
		if (ft_is_not_letter(str[i - 1]) && !ft_is_not_letter(str[i]))
		{
			str[i] = ft_change_case(str[i], '0');
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	str_to_lowercase(str);
	str_capitalize(str);
	return (str);
}

/*int main(int argc, char** argv)
{
	printf("input : %s\n", argv[1]);
	printf("result: %s\n", ft_strlowcase(argv[1]));
}*/