#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Void.
*/

int print_alphabet(void)
{
char alpha;
for (int i = 0; i <= 10; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
_putchar('\n');

}
}
}
