#include "main.h"
/**
 * print_rev - Print a string, in reverse followed by a new line.
 * @str: Type char pointer
 * Return: 0 Always (Success)
 */
void print_rev(char *str)
{
	int a;
	int let;

	for (a = 0; str[a] != 0; a++)
	{
	}
	for  (a = a - 1; a >= 0; a--)
	{
		let = str[a];
		_putchar(let);
	}
	_putchar('\n');
}