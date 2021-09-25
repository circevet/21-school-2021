/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:04:51 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/14 11:42:50 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_cat(int src);

int	main(int argc, char **argv)
{
	int	file;
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		file = open(argv[counter], O_RDWR);
		if (file == -1)
			return (0);
		ft_cat(file);
		close(file);
		counter++;
	}
	return (1);
}
