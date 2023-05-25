#include <math.h>
#include <stdio.h>

/**
 * main - a program that finds and prints the largest
 * prime factor of the number 612852475143
 * Return: always 0
 */

int main()
{
	long int q;
	long int i;
	long int maxi;

	q = 612852475143;
	maxi = -1;

	while (q % 2 == 0)
	{
		maxi = 2;
		q /= 2;
	}

	for (i = 3; i <= sqrt(q); i = i + 2)
	{
		while (q % i == 0)
		{
			maxi = i;
			q = q / i;
		}
	}

	if (q > 2)
		maxi = q;

	printf("%ld\n", maxi);

	return (0);
}
