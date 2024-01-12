#include "main.h"
/**
 * _memset - applying the memset function
 * @s: Sting the address memory
 * @b: the given value
 * @n: number of bytes
 *
 * Return: the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (k = 0; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
