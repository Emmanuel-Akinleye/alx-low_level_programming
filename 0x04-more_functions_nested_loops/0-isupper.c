#include "main.h"
/**
 * _isupper - Check if an alphabet is an uppercase character
 *@c: This is the parameter we're going to be checking
 * Return: c (Success)
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
return (c);
}
