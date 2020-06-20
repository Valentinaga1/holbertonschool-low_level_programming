#include "holberton.h"
/**
*print_number -  function that prints an integer.
*@n: n to print.
*/
void print_number(int n)
{
	char lastDigit;
	int reversed;

if (n < 0)
{
_putchar('-');
lastDigit = ('0' - (n % 10));
n /= -10;
}
else
{
lastDigit = ((n % 10) + '0');
n /= 10;
}

reversed = 0;
while (n > 0)
{
reversed = reversed * 10 + (n % 10);
n /= 10;
}

while (reversed > 0)
{
char c = ((reversed % 10) + '0');
_putchar(c);
reversed /= 10;
}
_putchar(lastDigit);
}
