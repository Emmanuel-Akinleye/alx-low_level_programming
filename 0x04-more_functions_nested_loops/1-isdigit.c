#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @c: This is an integer that we're going to return
 * Return: int (c)
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
return (c);
}
