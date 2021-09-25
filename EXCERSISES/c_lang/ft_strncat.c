/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:11:27 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/05 18:34:19 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*buf;

	i = 0;
	buf = dest;
	while (*dest)
		dest++;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (buf);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[100] = "ttt";
	char	str2[100] = "ff";
	char	str3[100] = "ttt";
	char	str4[100] = "ff";
	char	space[] = "the standart function:";
	char	my[] = "my code:";

	printf("%s\n", space);
	printf("%s\n", strncat(str1, str2, 5));
	printf("%s\n", my);
	printf("%s\n", ft_strncat(str3, str4, 5));
}
*/
