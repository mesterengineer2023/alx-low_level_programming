#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int a, as;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
a = as = 0;
while (s1[a] != '\0')
a++;
while (s2[as] != '\0')
as++;
conct = malloc(sizeof(char) * (a + as + 1));
if (conct == NULL)
return (NULL);
a = as = 0;
while (s1[a] != '\0')
{
conct[a] = s1[a];
a++;
}
while (s2[as] != '\0')
{
conct[a] = s2[as];
a++, as++;
}
conct[a] = '\0';
return (conct);
}
