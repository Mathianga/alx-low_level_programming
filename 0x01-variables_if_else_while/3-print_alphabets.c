#include <stdio.h>

/**
 * main - the entry point
 * Return: always 0
 */
int main(void)
{
	char i, j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
