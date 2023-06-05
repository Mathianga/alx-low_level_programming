#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *name1 = haystack;
		char *name2 = needle;

		while (*name1 == *name2 && *name2 != '\0')
		{
			name1++;
			name2++;
		}

		if (*name2 == '\0')
			return (haystack);
	}

	return (0);
}
