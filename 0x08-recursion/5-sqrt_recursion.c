
#include "main.h"

/**
 * test - checks for the square root
 * @x:int value
 * @y:int value
 *
 * Return: int
 */
int test(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (test(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (test(1, n));
}

