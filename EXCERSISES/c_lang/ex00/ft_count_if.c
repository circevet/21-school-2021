/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:13:04 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/16 11:01:21 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int lenght, int(*f)(char *))
{
	int	counter;
	int	elem;

	counter = 0;
	elem = 0;
	while (*tab && counter < lenght)
	{
		if (f(tab[counter]) != 0)
			elem++;
		counter++;
	}
	return (elem);
}


#include <stdio.h>

int	ft_mult(char *nb)
{
	printf("%s\n", nb);
	if (*nb >= 'a' && *nb <= 'z')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	*arr[3] = {"02", "g", "jhkg"};
	printf("%d\n", ft_count_if(arr, 3, &ft_mult));
}

