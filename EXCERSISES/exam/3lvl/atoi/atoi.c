/*====================================./2-0-ft_atoi.txt=========================
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
==============================================================================*/

# include <unistd.h>

int atoi(char *str)
{
    int i;
    int val;
    int  sign;

    i = 0;
    sign = 1;
    val = 0;
    while (str[i])
    {
        if (str[i] == '-')
        {    
            sign *= -1;
            i++;
        }
        while(str[i])
        {
            val *= 10;
            val += (str[i] - '0');
            i++;
        }
    }
    return (val * sign);
}