#include "main.h"
/**
 * _pow_recursion - power
 * @x:int(value of x)
 * @y:int(value of y)
 * Return:int(value of x raised power y
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

