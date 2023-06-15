#include <stdlib.h>
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

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
