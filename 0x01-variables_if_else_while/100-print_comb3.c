#include <stdio.h>     
#include <stdlib.h>
/**
 *main-prints number 01 to 89
 *Return: 0
 */
int main(void)
{
    int x = 48;
    int y = 49;
    int z = 48;
 
    while (x < 57)
    {
        while(y < 58) 
        {
            putchar(x);
            putchar(y);
            if((x != 56) || (y != 57))
            {
                putchar(',');
                putchar(' ');
            }
            y++;
        }
        x++;
        z++;
        y = z + 1;
    }

    putchar('\n');
    return (0);
}
