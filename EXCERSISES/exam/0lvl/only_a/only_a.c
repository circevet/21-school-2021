/*===============================./0-1-only_a.txt==========================
Assignment name  : only_a
Expected files   : only_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'a' character on the standard output.
=============================================================================*/

#include "only_a.h"

void	ft_only_a(void)
{
	write(1, "a", 1);
}
