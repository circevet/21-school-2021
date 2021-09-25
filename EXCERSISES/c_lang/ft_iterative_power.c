/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:31:21 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/08 20:50:52 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	value;

	counter = 1;
	value = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (counter < power)
	{
		nb = value * nb;
		counter++;
	}
	return (nb);
}

/*
#include <stdio.h>
#include <math.h>

int	main(void)
{
	char	a[] = "standart output:";
	char	m[] = "my function's output:";

	printf("%s\n", a);
	printf("%f\n", pow(-1.0, -2.0));
	printf("%f\n", pow(-2.0, -0.0));
	printf("%f\n", pow(-2.0, -2.0));
	printf("%f\n", pow(-2.0, -9.0));
	printf("%s\n", m);
	printf("%d\n", ft_iterative_power(-1, -2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-2, -2));
	printf("%d\n", ft_iterative_power(-2, -9));
}
*/
