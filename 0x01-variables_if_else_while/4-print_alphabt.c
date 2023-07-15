#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets except q and e'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	char c;

	while (c = n; n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(c);
		n++;
	}
	putchar('\n');
	return (0);
}
