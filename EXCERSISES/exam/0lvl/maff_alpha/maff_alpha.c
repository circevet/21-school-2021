/*====================================./0-0-maff_alpha.txt===================
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
============================================================================*/

#include "maff_alpha.h"

void	maff_alpha(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		if (a % 2 == 0)
		{
			a -= 32;
			write(1, &a, 1);
			a += 32;
		}
		else
		{
			write(1, &a, 1);
		}
		a++;
	}
}
