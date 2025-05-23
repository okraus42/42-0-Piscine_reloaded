/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:15:03 by okraus            #+#    #+#             */
/*   Updated: 2025/05/23 21:06:04 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		fd;
	int		br;
	char	buff[4096];

	if (argc < 2)
		return (write(2, "File name missing.\n", 19));
	else if (argc > 2)
		return (write(2, "Too many arguments.\n", 20));
	fd = open(argv[1], O_RDONLY);
	br = read(fd, buff, 4096);
	while (br)
	{
		if (br == -1)
			return (write(2, "Cannot read file.\n", 18));
		write(1, buff, br);
		br = read(fd, buff, 4096);
	}
	return (0);
}
