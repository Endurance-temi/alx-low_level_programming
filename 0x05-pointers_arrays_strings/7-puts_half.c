#include "main.h"
#include <stdio.h>
/**
 * puts_half - a function that print half of string
 * if odd len, n = (length_of_the_string -1) /2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
	n++;
	}
for (n /= 2; str[n] != '\0'; n++)
	{
_putchar(str[n]);
	}
	_putchar('\n');
}
