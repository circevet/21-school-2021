/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:15:08 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/09 21:23:36 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_print_params(int argc, char **argv)
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		ft_putstr(*(argv + counter));
		ft_putstr("\n");
		counter++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{	
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	main(int argc, char **argv)
{
	int		counter;
	int		i;
	int		j;
	char	*tmp;

	counter = 1;
	if (argc > 1)
	{
		while (counter < argc - 1)
		{
			i = 0;
			while (i > argc - 2)
			{
				if (ft_strcmp(*(argv), *(argv + counter)) > 0)
				{
					tmp = *argv;
					*argv = *(argv + counter);
					*(argv + counter) = tmp;
				}
				counter++;
				argc--;
			}
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
