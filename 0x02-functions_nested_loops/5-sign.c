#include "main.h"
/**
 * print_sign - Print n to the console
 * @n: This is the character that is going to be printed
 * Return: 1 if n is > 0 and 0 if n is 0 and -1 if n < 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if ((n == 0))
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (n);
}

