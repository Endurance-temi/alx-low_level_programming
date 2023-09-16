#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int p1;

if (p1 < 0)
{
p1 = p1;
_putchar('-');
}
else
{
p1 = p1;
}

if (p1 / 10)
{
print_number(p1 / 10);
}

_putchar((p1 % 10) + '0');
}
