#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 * @c: The character we're going to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
