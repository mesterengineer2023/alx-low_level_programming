#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calcul lengh of string
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
	int tail = 0;

	for (; s[tail] != '\0'; tail++)
	;
	return (tail);
}

/**
 * str_concat - concatenate two strings
 * @s1: string1
 * @s2: string2
 * Return: concat s1+s2
 */

char *str_concat(char *s1, char *s2)
{
	int tail1, tail2, i;
	char *aloc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	tail1 = _strlen(s1);
	tail2 = _strlen(s2);
	aloc = malloc((tail1 + tail2) * sizeof(char) + 1);

	if (aloc == 0)
		return (0);
	for (i = 0; i <= tail1 + tail2; i++)
	{
		if (i < tail1)
			aloc[i] = s1[i];
		else
			aloc[i] = s2[i - tail1];
	}
	aloc[i] = '\0';
	return (aloc);
}
