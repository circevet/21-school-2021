/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:06:17 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/08 20:50:41 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 && nb == -1)
	{
		if (-power % 2 == 0)
			return (1);
		else
			return (-1);
	}
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

/*
#include <stdio.h>
#include <math.h>

int	main(void)
{
	char	a[] = "standart output:";
	char	m[] = "my function's output:";

	printf("%s\n", a);
	printf("%f\n", pow(-1.0, -1.0));
	printf("%f\n", pow(2.0, 0.0));
	printf("%f\n", pow(2.0, 2.0));
	printf("%f\n", pow(-2.0, 9.0));
	printf("%s\n", m);
	printf("%d\n", ft_recursive_power(-1, -1));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(-2, 9));
}
*/
