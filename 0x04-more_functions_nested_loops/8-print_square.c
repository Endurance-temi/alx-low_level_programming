#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 *
 *@size: variable
 *
 * Return: Always
 */

void print_square(int size)
{
int b, a;

for (b = 0; b < size; b++)
{
for (a = 0; a < size; a++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
