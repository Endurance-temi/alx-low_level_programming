#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *  You are allowed to use the standard library
 *
 * description: numbersfactor
 *
 * Return: 0 Always
 */

int main(void)
{
long int k = 612852475143;
long int factors;

for (factors = 2; factors < k; factors++)
{
if (k % factors == 0)
{
k /= factors;
}
}

printf("%ld\n", factors);
return (0);
}
