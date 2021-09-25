#include <unistd.h>

void ft_putch(char c)
{
    write(1, &c, 1);
}

void chessboard(int x, int y)
{
    int place;
    int line = 0;
    int queen = 0;

    while (line < y)
    {
        place = 0;
        while (place < x)
        {
            if (place == queen)
                ft_putch('Q');
            else
                ft_putch(' ');
            place++;
        }
        queen += 2;
        if (queen >= x)
        {
            queen = 1;
        }
        ft_putch('\n');
        line++;
    }
}

int main(void)
{
    chessboard(8, 8);
}