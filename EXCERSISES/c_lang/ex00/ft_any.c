/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:11:12 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/16 10:57:10 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char *))
{
	while (*tab)
	{
		if ((*f)(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}


#include <stdio.h>

int	ft_mult(char *nb)
{
	if (*nb >= '0' && *nb <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	*arr[5] = {")", "K", "7", "", NULL};
	printf("%d\n", ft_any(arr, &ft_mult));

	return (0);
}

