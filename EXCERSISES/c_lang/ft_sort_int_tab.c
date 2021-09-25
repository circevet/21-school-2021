/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:59:02 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/10 11:46:24 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putch(char c);

void	ft_print_tab(int *tab, int size);

void	ft_sort_int_tab(int  *tab, int size)
{
	int	i;
	int	j;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = tmp;
				j = i + 1;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int *arr[9] = {12, 3, 19, 3, 2, 6, 3, 7};
	ft_sort_int_tab(arr, 8);
	ft_print_tab(arr, 8);

	return (0);
}