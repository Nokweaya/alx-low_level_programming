#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[i][r]);
		_putchar('\n');
	}
}
