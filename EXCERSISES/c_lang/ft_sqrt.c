/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:27:57 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/08 20:14:42 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	radix;

	radix = 1;
	if (nb < 0)
		return (0);
	while (nb > (radix * radix))
	{
		radix++;
	}
	if (nb == (radix * radix))
		return (radix);
	return (0);
}

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
	
	printf("%s\n", "standart output");
	printf("%f\n", sqrt(-1));
	printf("%f\n", sqrt(0));
	printf("%f\n", sqrt(1));
	printf("%f\n", sqrt(25));
	printf("%f\n", sqrt(225));
	printf("%s\n", "my functoin's output");
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(225));
}
*/
