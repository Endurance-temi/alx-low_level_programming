#include "main.h"
#include <stdio.h>
/**
 * puts2 - Print one char out of 2 of a string.
 * starting with the first character
 * @str: input
 * Return: Print
  */
void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
