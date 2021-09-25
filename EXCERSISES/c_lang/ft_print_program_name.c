/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:05:04 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/09 19:51:59 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*tmp;

	(void) argc;
	tmp = argv[0];
	while (*tmp)
	{
		write(1, tmp, 1);
		tmp++;
	}
	write(1, "\n", 1);
}
