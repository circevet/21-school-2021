/*======================================./0-0-ft_print_numbers.txt============
Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
------------------------------------------------------------------------------

Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);

============================================================================*/

#include "ft_print_numbers.h"

void	ft_print_numbers(void)
{
	char	count;

	count = '0';
	while (count <= '9')
	{
		write(1, &count, 1);
		count++;
	}
}
