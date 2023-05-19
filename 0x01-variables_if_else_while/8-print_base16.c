#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	char t;
	int i;

	t = 'a';
	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (t <= 'f')
	{
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
