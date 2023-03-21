#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Void
*/
void print_alphabet(void)
{
char alpha;
for (alpha = 'a';  alpha <= 'z';  alpha++)
{
_putchar(alpha);
_putchar('\n');
}
}
