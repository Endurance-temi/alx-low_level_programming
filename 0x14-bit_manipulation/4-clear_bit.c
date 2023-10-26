#include "main.h"
#include <stdlib.h>
/**
 * clear_bit -gets the value of a bit to at a given index.
 * @index: index
 * @n: parameter
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
