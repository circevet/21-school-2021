/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:50:25 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/11 12:22:55 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	counter;
	int	*arr;

	counter = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(counter * sizeof(int));
	if (arr == NULL)
		return (NULL);
	counter = 0;
	while (min < max)
	{
		arr[counter] = min;
		min++;
		counter++;
	}
	return (arr);
}


#include <stdio.h>

int	main(void)
{
	int start = 5;
	int end = 10;
	int *array;

	array = ft_range(start, end);
	int i = 0;
	while(i < (end - start))
	{
		printf("%d\n", array[i]);
		i++;
	}
}

