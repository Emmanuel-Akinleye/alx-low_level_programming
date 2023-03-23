#include "main.h"

void print_most_numbers(void)
{
int num = 0;
while (num < 10)
{
if (num == 50 || num == 60)
{
num++;
}
_putchar(num);
}
_putchar('\n');
}
