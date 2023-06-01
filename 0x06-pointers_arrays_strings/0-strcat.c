#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination of the string
 * @src: source of the string to be concatenated
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int m = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	dest[n] = '\0';

	return (dest);
}
