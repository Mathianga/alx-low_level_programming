#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination of the string.
 * @src: source of the string to be concatenated
 * @n: value to be computes
 * Return: concstenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
