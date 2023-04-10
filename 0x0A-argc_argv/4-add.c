#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *@argc: argument count
 *@argv: arguments
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
	int w, n, add = 0;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (w = 1; argv[w]; w++)
	{
		n = strtol(argv[w], &p, 10);
		if (*p)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add = add + n;
		}
	}
	printf("%d\n", add);
	return (0);
}

