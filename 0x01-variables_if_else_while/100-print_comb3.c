#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0  (Success)
 */
int main(void)
{
int i;
int j;
for (i = '0'; i <= '9'; ++i)
{
for (j = '0'; j <= '9'; ++j)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
return (0);
}
