#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
int counter;

for (counter = 0; counter < n; counter++)
{
if (counter != (n - 1))
{
printf("%d,", a[counter]);
}
else
{
printf("%d", a[counter]);
}
_putchar('\n');
}
}
