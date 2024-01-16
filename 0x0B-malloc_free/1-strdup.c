#include "main.h"
/**
 * *-strdup - return a pointer to a newly allocted space in memory
 * that contains a copy of string given as parameter
 * @str: is a string
 * Return: 0
 */

char *_strdup(char *str);

{
	int i = 0;
        int tail = 0;
	char *new_copy;

	if (str == NULL)
		return (NULL);

	for (; str[tail] != '\0'; tail++)
		new_copy = malloc(tail * sizeof(*str) + 1);
	if (new_copy == 0)
		return (NULL);

	for (; i < tail; i++)
	{
			new_copy[i] = str[i];
	}
		return (new_copy);
}
