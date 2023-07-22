#include "main.h"
/**
 * print_diagonal - prints diagonal using the '\' character
 * @n: the number of times the character '\' should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, a;

		for (i = 0 ; i < n ; i++)
		{
			for (a = 0 ; a <= i ; a++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
