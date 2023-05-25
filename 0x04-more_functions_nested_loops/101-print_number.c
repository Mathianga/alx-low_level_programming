#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: parameter to be execute
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int number1;

	if (n < 0)
	{
		number1 = -n;
		_putchar('-');
	}
	else
	{
		number1 = n;
	}

	if (number1 / 10)
	{
		print_number(number1 / 10);
	}

	_putchar((number1 % 10) + '0');
}
