#include <stdio.h>
#include <unistd.h>
/**
 * main - priting without using the functions printf and puts
 *
 * Return: always (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
