/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:19:47 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/14 13:29:20 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	counter;

	counter = 0;
	while (counter < length)
	{
		f(*tab);
		tab++;
		counter++;
	}
}

/*
#include <unistd.h>

void	ft_putch(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putch('-');
		ft_putch('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putch('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putch((nb % 10) + '0');
	}
}
int	main(void)
{
	int	arr[] = {1, 33, -10, 88, 9};

	ft_foreach(arr, 4, &ft_putnbr);
}
*/
