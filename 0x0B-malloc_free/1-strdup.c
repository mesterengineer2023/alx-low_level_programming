#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate memory space
 * @str: char
 * Return:0
 */
char *_strdup(char *str)
{
	char *hamid;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	hamid = malloc(sizeof(char) * (a + 1));

	if (hamid == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		hamid[b] = str[b];

	return (hamid);
}
