#include "main.h"
/**
 * print_line - print straight line on the terminal
 * @n: number of times the character '_' will be printed
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
