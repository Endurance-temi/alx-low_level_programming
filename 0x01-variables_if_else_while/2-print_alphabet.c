#include <stdio.h>
/**
 * main - Print lower case using putchar function
 * Return: Always (0)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
