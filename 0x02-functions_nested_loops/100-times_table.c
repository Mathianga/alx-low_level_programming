#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: a parameter to computes
 * Return: always 0
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = j * i;
				if (j == 0)
				{
					_putchar(m + '0');
				} else if (m < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				} else if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				} else if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

