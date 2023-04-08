#include <stdio.h>
#include "main.h"

/**
 * main: - prints name of the program
 * @argc: number of arguments
 * @argv: the array of argument to be stored
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
