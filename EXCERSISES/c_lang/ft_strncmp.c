/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:08:20 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/05 16:42:14 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && *s1 == *s2 && i < n)
	{	
		s1++;
		s2++;		
		i++;
	}
	return (*(unsigned char)s1 - *(unsigned char)s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "рпаваы";
	char	str2[] = "орпавы";
	char	space[] = "the standart function:";
	char	myspace[] = "my code:";

	printf("%s\n", space);
	printf("%d\n", strncmp(str1, str2, 10));
	printf("%s\n", myspace);
	printf("%d\n", ft_strncmp(str1, str2, 10));
}
*/
