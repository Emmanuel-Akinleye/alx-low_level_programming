#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints outs half of a string
 * @str: this is a pointer to a string
 *
 * Return: nothing
*/

void puts_half(char *str)
{
int length = strlen(str);
int i;
for (i = length / 2; i < length; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
