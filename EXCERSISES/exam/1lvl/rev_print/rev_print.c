/*======================================./1-3-rev_print.txt====================
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
-------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
==============================================================================*/

# include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_print(char *str)
{
	int		len;

	len = ft_strlen(str);
	while (str[len] >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
}