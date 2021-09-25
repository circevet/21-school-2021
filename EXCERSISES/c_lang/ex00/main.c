/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:24:20 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/14 11:42:51 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(int src);

int	main(int argc, char **argv)
{
	int	file;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file != -1)
	{
		ft_display_file(file);
		close(file);
		return (0);
	}
	else
		write(2, "Cannot read file.\n", 18);
	return (1);
}
