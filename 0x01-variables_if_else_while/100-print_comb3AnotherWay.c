#include <stdio.h>     
#include <stdlib.h>
/**
 *main-prints number 01 to 89
 *Return: 0
 */
int main(void)
{
    int x = 0;
    int y = x + 1;

 
    while (x <= 8)
    {
        while(y <= 9) 
        {
            putchar(x + '0');
            putchar(y + '0');
            if((x != 8) || (y != 9))
            {
                putchar(',');
                putchar(' ');
            }
            y++;
        }
        x++;
        y = x + 1;
    }

    putchar('\n');
    return (0);
}#include <stdio.h>     
#include <stdlib.h>
/**
 *main-prints number 01 to 89
 *Return: 0
 */
int main(void)
{
    int x = 0;
    int y = x + 1;

 
    while (x <= 8)
    {
        while(y <= 9) 
        {
            putchar(x + '0');
            putchar(y + '0');
            if((x != 8) || (y != 9))
            {
                putchar(',');
                putchar(' ');
            }
            y++;
        }
        x++;
        y = x + 1;
    }

    putchar('\n');
    return (0);
}
