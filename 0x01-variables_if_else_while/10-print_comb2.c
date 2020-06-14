#include <stdio.h>
/**
 *main-prints number 0 to 99
 *Return: 0
 */
int main(void)
{
    int x = 48;
    int y = 48;
    while (x <= 57)
    {
        while(y <= 57)
        {
            putchar(x);
            putchar(y);
            if((x != 57) || (y != 57))
            {
                putchar(',');
                putchar(' ');
            }
            y++;
        }
        y=48;
        x++;
    }
    
    putchar('\n');
    return (0);
}
