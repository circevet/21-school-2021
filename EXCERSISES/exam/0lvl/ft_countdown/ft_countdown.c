/*================================./0-0-ft_countdown.txt=======================
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
-------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
=============================================================================*/

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
