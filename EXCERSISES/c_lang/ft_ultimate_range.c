/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:16:26 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/12 13:11:53 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	counter;
	int	leng;
	int	*tmp;

	counter = max - min;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	tmp = (int *)malloc(counter * sizeof(int));
	if (tmp == NULL)
		return (-1);
	leng = 0;
	while (min < max)
	{
		tmp[leng] = min;
		min++;
		leng++;
	}
	*range = tmp;
	return (leng);
}

#include <stdio.h>

int	main(void)
{
	int *arr;
	int i = 0;
	printf("Ft_ul: %d\n", ft_ultimate_range(&arr, 1, 10));
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
