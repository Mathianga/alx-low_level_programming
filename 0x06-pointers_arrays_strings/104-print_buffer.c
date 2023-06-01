#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  a function that prints a buffer.
 * @b: buffer
 * @size: size
 * Return: always 0
 */

void print_buffer(char *b, int size)
{
	int j, n, i;

	n = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (n < size)
	{
		j = size - n < 10 ? size - n : 10;
		printf("%08x: ", n);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + n + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int p = *(b + n + i);

			if (p < 32 || p > 132)
			{
				p = '.';
			}
			printf("%c", p);
		}
		printf("\n");
		n = n + 10;
	}
}
