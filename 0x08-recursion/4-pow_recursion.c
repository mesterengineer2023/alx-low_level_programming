#include "main.h"
/**
 * _pow_recursion -  return power of number
 * @x: value of x
 * @y: value of y
 * Return: value of x raised power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
