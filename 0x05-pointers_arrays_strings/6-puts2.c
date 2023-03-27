#include "main.h"
#include <string.h>
#include <stdio.h>

void puts2(char *str)
{

int i;
for(i = 0; *str != '\0'; i++)
{
if(i % 2 == 0)
{
printf("%c", *str);
}
str++;
}
printf("\n");
}
