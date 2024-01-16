#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strdup - return a pointer to a newly allocted space in memory
 * that contains a copy of string given as parameter
 * @str: is a string
 * Return: 0
 */

char *_strdup(char *str)
{
char *xcopy;
int i, tail = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
xcopy = malloc(sizeof(char) * (i + 1));
if (xcopy == NULL)
return (NULL);
for (tail = 0; str[tail]; tail++)
xcopy[tail] = str[tail];
return (xcopy);
}
