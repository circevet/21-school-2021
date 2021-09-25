/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : 1.c
* Purpose :
* Creation Date : 22-12-2008
* Last Modified : Mon 22 Dec 2008 10:36:49 PM PST
* Created By :  
_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	o;

	o = *a;
	*a = *b;
	*b = o;
}
