#include "main.h"
/**
 * _strlen_recursion - calcul string's lenght
 * @s: value of string to calcul
 *
 * Return: value of lengh(int)
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
