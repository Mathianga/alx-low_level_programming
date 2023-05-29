#include "main.h"
#include <stdio.h>

/**
 *print_rev - a function that prints a give string in reverse
 *@s: a string parameter to be reverse
 *Return: string in reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int m;


	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (m = length; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
