/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:09:46 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/25 18:09:47 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	char	buffer[BUF_SIZE + 1];
	int		ret;
	int		fd;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	close(fd);
	return (0);
}
