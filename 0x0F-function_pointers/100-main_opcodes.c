#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	short bytes, x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%02x", *((unsigned char *) (main)));
	for (x = 1; x < bytes; x++)
		printf(" %02x", *((unsigned char *) (main + x)));
	putchar('\n');
	exit(EXIT_SUCCESS);
}
