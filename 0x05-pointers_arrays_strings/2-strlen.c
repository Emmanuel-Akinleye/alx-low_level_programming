#include "main.h"

/**
 * _strlen - This returns the length of a string
 * @s: This is a pointer
 * Return: length
*/
int _strlen(char *s)
{
unsigned int length  = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
