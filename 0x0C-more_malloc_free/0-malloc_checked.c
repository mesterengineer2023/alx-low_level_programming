#include "main.h"
/**
 *malloc_checked - function creates an array of chars,
 *and initializes it with a specific char
 *@b:integer
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (!str)
	exit(98);
	return (str);
}
