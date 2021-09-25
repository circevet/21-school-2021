/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:43:36 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/08 21:29:03 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;
	int	founder;

	counter = 2;
	if (nb <= 1)
		return (0);
	while (counter < nb)
	{
		founder = nb % counter;
		if (founder == 0)
			return (0);
		else
			counter++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", "my function's output:");
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(4554));
}
*/
