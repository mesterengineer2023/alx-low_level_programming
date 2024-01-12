#include <stdio.h>

/**
 * main - entry point
 * @argc: n arguments
 * @argv: passed argument
 *
 * Description: -
 * Return: -
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
