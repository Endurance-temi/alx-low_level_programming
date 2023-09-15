#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: variable
 *
 * Return: 0 (Always)
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
