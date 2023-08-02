#include "main.h"
/**
 * factorial - factorial of given number.
 * @n:integer
 * Return:integer
 */
int factorial(int n)
{
	int z;

	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	{
	z = n * factorial(n - 1);
	}
	return (z);
}
