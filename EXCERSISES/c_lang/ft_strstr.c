/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:16:15 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/05 20:52:28 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
	{	
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	counter;

	counter = 0;
	if (*to_find == '\0')
		return (str);
	if (*(to_find + counter) != '\0')
	{
		counter++;
	}
	while (*str)
	{
		if (!ft_strncmp(str, to_find, counter))
		{
			return (*str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[100] = "01234563435353424";
	char	str2[100] = "457";
	//char	str3[100] = "0123456";
	//char	str4[100] = "45";
	char	space[] = "the standart function:";
	char	my[] = "my code:";

	printf("%s\n", space);
	printf("%s\n", strstr(str1, str2));
	printf("%s\n", my);
	//printf("%s\n", ft_strstr(str3, str4));
}
*/
