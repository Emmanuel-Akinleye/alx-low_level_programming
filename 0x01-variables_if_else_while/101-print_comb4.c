#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i,j,k;
for (i = '0'; i <= '9'; i++)
{
for ( j = '0'; j < '9'; j++) 
{
for ( k = '0'; k < '9'; k++)
{
putchar(i);
putchar(j);
putchar(k);
putchar(',');
}
}
}
return (0);
}

