/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:32:41 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/18 18:07:11 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{										
	unsigned int	val;
	int				i;
	int				sign;

	val = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val *= 10;
		val += (str[i] - '0');
		i++;
	}
	return (val * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	char	bb[] = "-4674lkjh";
	int		x;

	printf("INPUT VAL: %s\n", bb);
	x = ft_atoi(bb);
	printf("ATOI OUTPUT: %d\n", x);
}
*/
