#include <stdio.h>
#include "main.h"
/**
 * print_array - prints out the elements of an array
 * @a: points to an integer
 * @n: This is an integer
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d ", *(a + i));
if (*(a + i) == -1024)
{
break;
}
printf(",");
printf(" ");
}
printf("\n");
}
