#include "main.h"
/**
 * print_numbers - print numbers form 0 -9
 *
 * Return: Nothing
*/

void print_numbers(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
_putchar(num);
}
_putchar('\n');
}
