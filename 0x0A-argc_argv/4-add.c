#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: if not recieve 2 arg, return error
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 1; y < argc; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
		add += atoi(argv[x]);
		}
	}

	printf("%d\n", add);
	return (0);
}
