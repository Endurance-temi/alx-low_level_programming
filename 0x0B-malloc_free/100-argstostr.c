#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments and gives pointer.
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: the pointer to a new my string, or NULL if failed.
 */

char *argstostr(int ac, char **av)

{
	char *mystr;
	int arg, subarg, i;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (subarg = 0; av[arg][subarg]; subarg++)
			size++;
	}

	mystr = malloc(sizeof(char) * size + 1);

	if (mystr == NULL)

	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
		;
	return (NULL);
}
