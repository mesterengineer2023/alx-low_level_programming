#include "main.h"
/**
 * _strlen_recursion - calculate string's length
 * @s: value of string to be calculate
 *
 * Return: value of length(integer)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

