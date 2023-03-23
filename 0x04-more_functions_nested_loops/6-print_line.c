#include "main.h"
/**
 * print_line - Prints out '_'
 * @n: This is the amount of times we're going to print out the line
 * Return: We'll return n
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
else if (n <= 0)
{
_putchar('\n');
}
}
_putchar('\n');
}
