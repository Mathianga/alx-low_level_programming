#include "main.h"

/**
 *puts2 - a function that prints every other character
 * of a string, starting with the first character.
 *@str: a string
 *Return: always 0
 */

void puts2(char *str)
{
	int length = 0;
	int x = 0;
	char *j = str;
	int n;

	while (*j != '\0')
	{
		j++;
		length++;
	}

	x = length - 1;
	for (n = 0 ; n <= x ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
