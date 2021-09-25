/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:20:00 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/19 20:35:12 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search_and_replace.h"

int	main(int ac, char **av)
{
	int	count;

	count = 0;
	while (*av[2])
	{
		av[2]++;
		av[3]++;
		count++;
	}
	av[2]--;
	av[3]--;
	if (ac == 4 && count == 1)
	{
		search_and_replace(av[1], *av[2], *av[3]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
