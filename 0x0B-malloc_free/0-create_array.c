#include "main.h"
/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific char
 * @size: first bytes of the memory
 * @c: constant 
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int z = size;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (z >= 0)
	{
		s[z] = c;
		z--;
	}
	return (s);
}
