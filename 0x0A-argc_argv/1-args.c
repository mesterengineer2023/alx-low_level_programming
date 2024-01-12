#include <stdio.h>

/**
 * main - prints arguments
 * @argc: number of arguments
 * @argv: vectors passed
 *
 * Description: -
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
