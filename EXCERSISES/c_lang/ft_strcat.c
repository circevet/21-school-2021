/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:46:05 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/05 17:49:11 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*buf;

	buf = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (buf);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[100] = "ales gutte";
	char	str2[100] = "all is good";
	char	str3[100] = "ales gutte";
	char	str4[100] = "all is good";
	char	space[] = "the standart function:";
	char	my[] = "my code:";

	printf("%s\n", space);
	printf("%s\n", strcat(str1, str2));
	printf("%s\n", my);
	printf("%s\n", ft_strcat(str3, str4));
}
*/
