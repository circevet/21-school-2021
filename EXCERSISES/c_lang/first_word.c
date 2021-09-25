/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:17:38 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/18 19:31:50 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a string and displays its first word, followed by a
newline.
 
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
 
If the number of parameters is not 1, or if there are no words, simply display
a newline.
 
Examples:
 
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] && (str[i] != ' ' || str[i] == '\t' || str[i] == '\n'))
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	counter;

	counter = 1;
	while (counter < ac)
	{
		ft_first_word(av[1]);
		counter++;
	}
}
