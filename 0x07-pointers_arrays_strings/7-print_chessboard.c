#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: pointer
 * Return: Always 0(Success)
 */
void print_chessboard(char (*a)[8])
{
	int q;
	int e;

	for (q = 0; q < 8; q++)

	{
		for (e = 0; e < 8; e++)
		_putchar(a[q][e]);
		_putchar('\n');
	}
}
