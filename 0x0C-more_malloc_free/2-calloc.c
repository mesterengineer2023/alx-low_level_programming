#include "main.h"
/**
 * _calloc - function that creates an array of chars,
 *and initializes it with a specific char
 *@nmemb:array of nmem bytes
 *@size:size of bytesy
 *Return: pointers
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *string;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	string = malloc(nmemb * size);
	if (string == NULL)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
	string[i] = 0;
	}
	return (string);
}
