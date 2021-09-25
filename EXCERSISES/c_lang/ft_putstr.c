/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:47:50 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/06 12:56:42 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	p[20] = "my function:";
	char	m[100] = "плдволыпывпро";

	printf("%s\n", p);
	ft_putstr(m);
}
*/
