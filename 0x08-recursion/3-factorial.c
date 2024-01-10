#include "main.h"
/**
 * factorial -factorial of given number
 * @n: integer
 * Return: int
 */
int factorial(int n)
{
	int result;

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
		result = n * factorial(n - 1);
	}
	return (result);
}
