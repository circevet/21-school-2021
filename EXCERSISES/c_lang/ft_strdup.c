/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:57:26 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/11 12:20:28 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*temp;
	int		counter;

	counter = 0;
	if (src == NULL)
		return (NULL);
	while (src[counter])
		counter++;
	dest = malloc(counter + 1);
	if (dest == NULL)
		return (NULL);
	temp = dest;
	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	s1[100] = "ree";
	char	*dubstr;
	
	dubstr = ft_strdup(s1);
	printf("%s\n", dubstr);
	free(dubstr);
}
