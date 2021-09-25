/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:01:01 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/22 21:44:06 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ulstr.h"

void	ft_ulstr(char *str);

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (i < ac)
		{	
			ft_ulstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
