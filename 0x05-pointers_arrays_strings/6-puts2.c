#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints out everyother string to the stdout
 * @str: this is pointer to a string;
 *
 * Return: nothing
*/
void puts2(char *str)
{

int i;
for (i = 0; *str != '\0'; i++)
{
if (i % 2 == 0)
{
printf("%c", *str);
}
str++;
}
printf("\n");
}
