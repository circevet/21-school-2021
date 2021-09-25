/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:42:15 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/18 21:01:44 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

int	main(void)
{
	char	counter;

	counter = '9';
	while (counter >= '0')
	{
		ft_putchar(counter);
		counter--;
	}
	write(1, "\n", 1);
}
