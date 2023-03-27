#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: First integer
 * @b: Second Integer
 *
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;
*a = d;
*b = c;
}
