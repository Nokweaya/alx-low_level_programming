#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: parameter to be checked
 * Return: 1 on success 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
