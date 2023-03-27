#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: This is a pointer
 * @src: This is a pointer
 *
 * Return: nothing
*/
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
