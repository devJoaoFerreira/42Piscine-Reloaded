/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:32:24 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/16 15:09:36 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char **argv);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!ft_display_file(&argv[1]))
		{
			write(2, "Cannot read file.\n", 18);
			return (0);
		}
	}
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}

int	ft_display_file(char **argv)
{
	int		fd;
	int		rd;
	char	buf[1024];

	fd = open(argv[0], O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, 1024);
	while (rd > 0)
	{
		write(1, buf, rd);
		rd = read(fd, buf, 1024);
	}
	close (fd);
	return (1);
}
