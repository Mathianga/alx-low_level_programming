#include "main.h"

/**
 *print_line - a function that draws a straight
 * line in the terminal.
 *@n: parameter input
 *Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
