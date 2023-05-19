#include <stdio.h>

/**
 * main - function that prints a combination ot two numbers
 * Return: always 0
 */

int main(void)
{
	int i = '0', j = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '1';
		i++;
	}
	return (0);

}
