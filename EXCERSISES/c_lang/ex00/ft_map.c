/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:47:15 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/15 17:22:05 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	counter;
	int	*array;

	counter = 0;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	while (counter < length)
	{
		array[counter] = (*f)(tab[counter]);
		counter++;
	}
	return (array);
}

/*
#include <stdio.h>

int	ft_mult(int nb)
{
	return (nb * 5);
}
int	main(void)
{
	int	arr[] = {1, 33, -10, 88, 9};
	int *ann;

	ann = ft_map(arr, 4, &ft_mult);

	printf("%d\n", ann[0]);
}
*/
