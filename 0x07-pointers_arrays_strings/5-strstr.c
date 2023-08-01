#include "main.h"
/**
 * _strstr -  function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *k = needle;

		while (*r == *k && *k != '\0')
		{
			r++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
