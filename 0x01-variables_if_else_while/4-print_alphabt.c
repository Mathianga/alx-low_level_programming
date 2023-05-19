#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char q;

	q = 'a';
	while (q <= 'z')
	{
		if ((q != 'q' && q != 'e') && q <= 'z')
			putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
