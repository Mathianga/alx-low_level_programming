#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: a string to be converted to integer
 * Return: string
 */

int _atoi(char *s)
{
	int i, d, n, length, f, digit;

	i = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);

}

/**
 * main - a function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 & 1 on success and on error respectively
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
