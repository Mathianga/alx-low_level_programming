#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies a string from
 * a from a given source to a given destination
 * @dest: string destination
 * @src: string source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0, x = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for ( ; x < length ; x++)
	{
		dest[x] = src[x];
	}
	dest[length] = '\0';

	return (dest);
}
