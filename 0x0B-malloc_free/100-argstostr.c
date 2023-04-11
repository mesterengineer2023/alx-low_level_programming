#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int q, n, a = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (n = 0; av[q][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
	for (n = 0; av[q][n]; n++)
	{
		str[a] = av[q][n];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}

