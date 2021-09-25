/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:25:17 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/08 20:50:25 by mmicheli         ###   ########.fr       */
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

/*
#include <stdio.h>
#include <math.h>

int	main(void)
{
	printf("%s\n", "my function's output");
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(-2));
	printf("%d\n", ft_is_prime(-11));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(-113));
	printf("%d\n", ft_is_prime(787));
	printf("%d\n", ft_is_prime(-983));

}
*/
