/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:55:25 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/16 11:07:27 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	if (length < 3)
		return (1);
	while (++i < length - 1)
	{
		if (f(tab[i - 1], tab[i]) >= 0 && f(tab[i], tab[i + 1]) >= 0)
			continue ;
		else if (f(tab[i - 1], tab[i]) <= 0 && f(tab[i], tab[i + 1]) <= 0)
			continue ;
		else
			return (0);
	}
	return (1);
}


int	ft_compare(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int arr[] = {};

	printf("%d\n", ft_is_sort(arr, 0, ft_compare));
}

