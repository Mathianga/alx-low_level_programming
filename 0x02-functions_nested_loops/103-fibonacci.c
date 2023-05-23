#include <stdio.h>

/**
 * main - a program that finds and prints the sum
 * of the even-valued terms
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long int j, y, next, sum;

	j = 1;
	y = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + y;
		j = y;
		y = next;
	}
	printf("%lu\n", sum);
	return (0);
}
