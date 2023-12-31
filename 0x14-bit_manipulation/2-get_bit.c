#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: the index of the bit to be gotten
 * Return: int 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
