/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:12:33 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/08 19:48:40 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	counter;
	int	fact;

	counter = 1;
	fact = 1;
	if (nb >= 0)
	{
		while (counter <= nb)
		{
			fact = fact * counter;
			counter++;
		}	
		return (fact);
	}
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "standart output:";
	char	m[] = "my function's output:";

	printf("%s\n", a);
	printf("%s\n", m);
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(5));
}
*/
