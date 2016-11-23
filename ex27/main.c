/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 11:56:45 by hmartzol          #+#    #+#             */
/*   Updated: 2016/11/23 07:48:32 by lemon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	buffer[1024];
	int		fd;
	int		r;

	if (argc < 2)
		write(1, "File name missing\n", 18);
	if (argc > 2)
		write(1, "Too many arguments\n", 19);
	fd = open(argv[1], O_RDONLY);
	while ((r = read(fd, buffer, 1024)) > 0)
		write(1, buffer, r);
	close(fd);
}
