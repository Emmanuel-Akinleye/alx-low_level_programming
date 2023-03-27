#include "main.h"
#include <string.h>
#include <stdio.h>


void puts_half(char *str)
{
int length = strlen(str);
int i;
for (i = length / 2; i < length; i++)
{
printf("%c", str[i]);  
}
}
