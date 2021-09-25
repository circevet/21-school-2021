/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:48:56 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/06 11:48:33 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

/*
#include <stdio.h>

int	main(void)
{
	char	p[20] = "my function:";
	char	m[100] = "sdgag aauh  987976 ajjahfjhg8!";

	printf("%s\n", p);
	printf("%d\n", ft_strlen(m));
}
*/
