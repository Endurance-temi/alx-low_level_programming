#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: none
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}

	return (0);
}
