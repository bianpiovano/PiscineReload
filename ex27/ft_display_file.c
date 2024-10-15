/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpiovano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:20:00 by bpiovano          #+#    #+#             */
/*   Updated: 2024/10/15 19:55:26 by bpiovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void	ft_puterror(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
}

fd = open(filename, O_RDONLY);

int	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE];

	if (fd == -1)
	{
		ft_puterror("Cannot read file.\n");
		return (1);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
	}
	if (bytes_read == -1)
	{
		ft_puterror("Error reading file.\n");
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_puterror("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (1);
	}
	else
	{
		return (ft_display_file(argv[1]));
	}
}
