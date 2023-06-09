#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a string to be filled
 * @b: the value
 * @n: input parameter
 * Return: array (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
