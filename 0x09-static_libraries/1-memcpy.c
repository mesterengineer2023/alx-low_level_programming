#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @n: function copies
 *
 * @src: numbers of bytes from memory location
 * @dest: memory area
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int u = 0;

	while (u < n)
	{
		dest[u] = src[u];
		u++;
	}
	return (dest);
}
