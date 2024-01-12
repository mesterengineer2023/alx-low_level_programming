#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of command line arguments
 *
 * @argv:  array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, s;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");

	}

	for (a = 1; a < argc; a++)
	{
		sum += atoi(argv[a]);

		for (s = 0; argv[a][s] != '\0'; s++)
		{
			if (!(isdigit(argv[a][s])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
