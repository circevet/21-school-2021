/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:29:47 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/05 17:32:51 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{	
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "апролдж";
	char	str2[] = "апролд";
	char	space[] = "the standart function:";
	char	my[] = "my code:";

	printf("%s\n", space);
	printf("%d\n", strcmp(str1, str2));
	printf("%s\n", my);
	printf("%d\n", ft_strcmp(str1, str2));
}
*/
