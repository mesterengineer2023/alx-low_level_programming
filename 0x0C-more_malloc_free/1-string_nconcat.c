#include "main.h"
/**
 *string_nconcat - function to  creates an array of chars
 *and initializes it with a specific char
 *@s1: first string
 *@s2: second stringy
 *@n: inty
 *Return: pointer string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *copy;
	unsigned int tail1 = 0;
	unsigned int tail2 = 0;

	if (s2 == NULL)
	s2 = "";
	if (s1 == NULL)
	s1 = "";
	while (s1[tail1])
	{
	tail1++;
	}
	while (s2[tail2])
	{
	tail2++;
	}
	if (tail2 > n)
	tail2 = n;
	copy = malloc(tail1 + tail2 + 1);
	if (!copy)
	{
	return (NULL);
	}
	for (i = 0; i < tail1 + tail2; i++)
	{
	if (i < tail1)
	{
	copy[i] = s1[i];
	}
	else
	{
	copy[i] = s2[i - tail1];
	}
	}
	copy[i] = '\0';
	return (copy);
}
