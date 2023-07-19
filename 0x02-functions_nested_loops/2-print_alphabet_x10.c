#include "main.h"
/**
 * print_alphabet_x10 - print 10 times alphabets in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for  (i = 0 ; i < 10 ; i++)
	{
		for (a = 97 ; a <= 122 ; a++)
			_putchar(a);
		_putchar('\n');
	}
}
