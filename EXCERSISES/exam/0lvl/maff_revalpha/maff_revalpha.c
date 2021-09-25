/*===============================./0-1-maff_revalpha.txt=======================
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
=============================================================================*/

#include "maff_revalpha.h"

void	ft_aff_revalpha(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		if (z % 2 != 0)
		{
			z -= 32;
			write(1, &z, 1);
			z += 32;
		}
		else
			write(1, &z, 1);
		z--;
	}
}
